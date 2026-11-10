/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040ab80; name: FUN_0040ab80
 */


undefined8 FUN_0040ab80(FILE *param_1)

{
  if (*(FILE **)PTR_stdout_04372328 == param_1 || *(FILE **)PTR_stderr_04372330 == param_1) {
    fwrite(&DAT_038da8c3,4,1,param_1);
    return 0;
  }
  if (*(FILE **)PTR_stdin_04372360 != param_1) {
    if ((*(byte *)&param_1->_IO_read_end >> 1 & 1) != 0) {
      nn::fs::FlushFile(*(undefined8 *)param_1);
    }
    nn::fs::CloseFile(*(undefined8 *)param_1);
    free(param_1);
  }
  return 0;
}


