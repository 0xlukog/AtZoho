import java.util.Scanner;

public class Main {
    static int count = 4;

    public static int findAvgBudgetByDirector(Movie movies[], String director) {
        int sum = 0;
        int counter = 0;
        for (Movie movie : movies) {
            if (movie.getDirector().equals(director)) {
                sum += movie.getBudget();
                counter++;
            }
        }
        return sum / counter;

    }

    public static Movie getMovieByRatingBudget(Movie movies[], int rating, int budget) {
        for (Movie movie : movies) {
            if (movie.getBudget() == budget && movie.getRating() == rating && budget % rating == 0) {
                return movie;
            }
        }
        return null;
    }

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        Movie movies[] = new Movie[count];
        
            for (int i = 0; i < count; i++) {

                int movid = Integer.parseInt(s.nextLine());

                String director = s.nextLine();

                int rating = Integer.parseInt(s.nextLine());

                int budget = Integer.parseInt(s.nextLine());

                movies[i] = new Movie(movid, director, rating, budget);

            }

        String InputDirector = s.nextLine();

        int InputRating = Integer.parseInt(s.nextLine());

        int InputBudget = Integer.parseInt(s.nextLine());

        int ResultAvg = findAvgBudgetByDirector(movies, InputDirector);


        Movie ResultMovie = getMovieByRatingBudget(movies, InputRating, InputBudget);
        
            if (ResultAvg > 0) {
                System.out.println(ResultAvg);
            } else {
                System.out.println("Sorry");
            }

            if (ResultMovie == null) {
                System.out.println("No movie found on given rating and budget");
            } else {
                System.out.println(ResultMovie.getMovieId());
            }

    }
}

class Movie {
    private int movieId;
    private String director;
    private int rating;
    private int budget;

    public int getMovieId() {
        return movieId;
    }

    public void setMovieId(int movieId) {
        this.movieId = movieId;
    }

    public String getDirector() {
        return director;
    }

    public void setDirector(String director) {
        this.director = director;
    }

    public int getRating() {
        return rating;
    }

    public void setRating(int rating) {
        this.rating = rating;
    }

    public int getBudget() {
        return budget;
    }

    public void setBudget(int budget) {
        this.budget = budget;
    }

    Movie(int movieId, String director, int rating, int budget) {
        this.movieId = movieId;
        this.director = director;
        this.rating = rating;
        this.budget = budget;
    }
}