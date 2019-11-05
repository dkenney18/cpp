/*

    Devin Kenney
    Convert number grades to letter grade
    09-24-19

*/

#include <iostream>

using namespace std;

int main() 
{
    double m1_base;
    double m1_sqrft;

    double m2_base;
    double m2_sqrft;

    double m3_base;
    double m3_sqrft;

    double m1_price_per_sqrft;
    double m2_price_per_sqrft;
    double m3_price_per_sqrft;

    double col_pps;
    double se_pps; 
    double ss_pps;

    double min;
    double mid; 
    double max;

    string min_kind;
    string mid_kind;
    string max_kind;


    cout << "Enter Model 1 Base Price: ";
    cin >> m1_base;
    cout << endl;

    cout << "Enter Model 1 Square Feet: ";
    cin >> m1_sqrft;
    cout << endl;

    cout << "Enter Model 2 Base Price: ";
    cin >> m2_base;
    cout << endl;

    cout << "Enter Model 2 Square Feet: ";
    cin >> m2_sqrft;
    cout << endl;

    cout << "Enter Model 3 Base Price: ";
    cin >> m3_base;
    cout << endl;

    cout << "Enter Model 3 Square Feet: ";
    cin >> m3_sqrft;
    cout << endl;

    /* a */ m1_price_per_sqrft = m1_base / m1_sqrft;
    /* b */ m2_price_per_sqrft = m2_base / m2_sqrft;
    /* c */ m3_price_per_sqrft = m3_base / m3_sqrft;

    col_pps = m1_price_per_sqrft;
    se_pps = m2_price_per_sqrft;
    ss_pps = m3_price_per_sqrft;

    if (m1_price_per_sqrft > m2_price_per_sqrft)
    {
        swap(m1_price_per_sqrft, m2_price_per_sqrft);
    }
    if (m2_price_per_sqrft > m3_price_per_sqrft)
    {
        swap(m2_price_per_sqrft, m3_price_per_sqrft);
    }

    min = m1_price_per_sqrft;
    mid = m2_price_per_sqrft;
    max = m3_price_per_sqrft;

    //check what kind min is
    if (min == col_pps) 
    {
        min_kind = "colonial model";
    } 
    else if (min == se_pps) 
    {
        min_kind = "split-entry model";
    } 
    else if (min == ss_pps) 
    {
        min_kind = "single-story model";
    }

     //check what kind mid is
     if (mid == col_pps) 
    {
        mid_kind = "colonial model";
    } 
    else if (mid == se_pps) 
    {
        mid_kind = "split-entry model";
    } 
    else if (mid == ss_pps) 
    {
        mid_kind = "single-story model";
    }

    //check what kind max is
     if (max == col_pps) 
    {
        max_kind = "coloinal model";
    } 
    else if (max == se_pps) 
    {
        max_kind = "split-entry model";
    } 
    else if (max == ss_pps) 
    {
        max_kind = "single-story model";
    }


    if (max_kind == mid_kind && max_kind == min_kind) 
    {
        cout << "The price per square foot all three models are the same." << endl;
    } 
    else 
    {
        cout << "The price per square foot of the " << min_kind << " is the least";
    }

     //check what kind min is
    if (min == col_pps && min == se_pps) 
    {
        cout << "colonial model and split-entry model tie for least" << endl;
    } 
    else if (min == col_pps && min == ss_pps) 
    {
        cout << "colonial model and single-story model tie for least" << endl;
    } 
    else
    {
        cout << "single-story and split-entrty model tie for least" << endl;
    } else if (mid == col_pps && min == se_pps) 
    {
        cout << "colonial model and split-entry model tie for least" << endl;
    } 
    else if (mid == col_pps && min == ss_pps) 
    {
        cout << "colonial model and single-story model tie for least" << endl;
    } 
    else 
    {
        cout << "single-story and split-entrty model tie for least" << endl;
    }

    if (max == col_pps && min == se_pps) 
    {
        cout << "colonial model and split-entry model tie for least" << endl;
    } 
    else if (max == col_pps && min == ss_pps) 
    {
        cout << "colonial model and single-story model tie for least" << endl;
    } 
    else 
    {
        cout << "single-story and split-entrty model tie for least" << endl;
    }




    return 0;
}
