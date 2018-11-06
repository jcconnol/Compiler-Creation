int main()
{
  FileMap file(L"C:\\temp\\Sample.b");

  if (!file)
  {
    printf("Error: failed to open file\n");
    return 1;
  }

  printf("Source: %.*s\n", file.Size(), file.Begin());

  Scanner scanner(file.Begin(), file.End());
  
}