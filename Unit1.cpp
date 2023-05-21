//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OneClick(TObject *Sender)
{
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
Display->Text = "";
}
String text = Display->Text;
if(text.Length()<10){
Display->Text = Display->Text + "1";
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TwoClick(TObject *Sender)
{
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
Display->Text = "";
}
String text = Display->Text;
if(text.Length()<10){
Display->Text = Display->Text + "2";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ThreeClick(TObject *Sender)
{
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
Display->Text = "";
}
String text = Display->Text;
if(text.Length()<10){
Display->Text = Display->Text + "3";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FourClick(TObject *Sender)
{
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
Display->Text = "";
}
String text = Display->Text;
if(text.Length()<10){
Display->Text = Display->Text + "4";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FifeClick(TObject *Sender)
{
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
Display->Text = "";
}
String text = Display->Text;
if(text.Length()<10){
Display->Text = Display->Text + "5";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SixClick(TObject *Sender)
{
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
Display->Text = "";
}
String text = Display->Text;
if(text.Length()<10){
Display->Text = Display->Text + "6";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SevenClick(TObject *Sender)
{
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
Display->Text = "";
}
String text = Display->Text;
if(text.Length()<10){
Display->Text = Display->Text + "7";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EightClick(TObject *Sender)
{
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
Display->Text = "";
}
String text = Display->Text;
if(text.Length()<10){
Display->Text = Display->Text + "8";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NineClick(TObject *Sender)
{
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
Display->Text = "";
}
String text = Display->Text;
if(text.Length()<10){
Display->Text = Display->Text + "9";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ZeroClick(TObject *Sender)
{
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
Display->Text = "";
}
String text = Display->Text;
if(text.Length()<10){
Display->Text = Display->Text + "0";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PlusClick(TObject *Sender)
{

if(o != 0){
ShowMessage("This calculator takes just 2 numbers.");
result();
exit(0);
}
if( Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
ShowMessage("Your math operation is already selected!");
}
else {
numbers[0] = Display->Text.ToDouble();
Display->Text = "+";
o = 1 ;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MinusClick(TObject *Sender)
{
if(o != 0){
ShowMessage("This calculator takes just 2 numbers.");
result();
exit(0);
}
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/" ){
ShowMessage("Your math operation is already selected!");
}
else {
numbers[0] = Display->Text.ToDouble();
Display->Text = "-";
o = 2 ;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MultiplyClick(TObject *Sender)
{
if(o != 0){
ShowMessage("This calculator takes just 2 numbers.");
result();
exit(0);
}
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
ShowMessage("Your math operation is already selected!");
}
else {
numbers[0] = Display->Text.ToDouble();
Display->Text = "*";
o = 3 ;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DividedClick(TObject *Sender)
{
if(o != 0){
ShowMessage("This calculator takes just 2 numbers.");
result();
exit(0);
}
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
ShowMessage("Your math operation is already selected!");
}
else {
numbers[0] = Display->Text.ToDouble();
Display->Text = "/";
o = 4 ;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DotClick(TObject *Sender)
{
{
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
Display->Text = "";
}
String text = Display->Text;
if(text.Length()<10){
Display->Text = Display->Text + ".";
}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EqualClick(TObject *Sender)
{
if(Display->Text == "+" || Display->Text == "-" || Display->Text == "*" || Display->Text == "/"){
ShowMessage("Write secod number!");
}
else  {
numbers[1] = Display->Text.ToDouble();
Display->Text ="";
}
	result();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::AllClearClick(TObject *Sender)
{
Display->Text="";
numbers[2]={};
}
//---------------------------------------------------------------------------

