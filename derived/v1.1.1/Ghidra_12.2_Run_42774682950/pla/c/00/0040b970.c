/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040b970; name: FUN_0040b970
 */


int FUN_0040b970(FILE *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long local_18;
  
  if (*(FILE **)PTR_stdout_04372328 == param_1 || *(FILE **)PTR_stderr_04372330 == param_1) {
    fwrite(&DAT_038da8c3,4,1,param_1);
    return 0;
  }
  if (*(FILE **)PTR_stdin_04372360 == param_1) {
    return 0;
  }
  local_18 = 0;
  uVar2 = nn::fs::GetFileSize(&local_18,*(undefined8 *)param_1);
  if (uVar2 == 0) {
    return -(uint)(local_18 <= (long)param_1->_IO_read_ptr);
  }
  if ((uVar2 & 0x1ff) == 2) {
    uVar1 = uVar2 & 0x3ffe00;
    if (uVar1 == 0x400) {
      uVar3 = 0x11;
LAB_0040ba7c:
      *(undefined4 *)((long)&param_1->_IO_read_end + 4) = uVar3;
      return 0;
    }
    if (uVar1 == 0x200) {
      uVar3 = 2;
      goto LAB_0040ba7c;
    }
    uVar2 = uVar2 >> 9 & 0x1fff;
    if (uVar2 - 0x1e < 0x10) {
      uVar3 = 0x1c;
      goto LAB_0040ba7c;
    }
    if (uVar1 < 0x1a00) {
      if (uVar1 == 0xe00) {
        uVar3 = 0x10;
        goto LAB_0040ba7c;
      }
      if (uVar1 == 0x1000) {
        uVar3 = 0x27;
        goto LAB_0040ba7c;
      }
    }
    else {
      if (uVar1 == 0x1a00) {
        uVar3 = 0xb;
        goto LAB_0040ba7c;
      }
      if (uVar1 == 0x177200) {
        uVar3 = 0x26;
        goto LAB_0040ba7c;
      }
      if (uVar1 == 0x177a00) {
        uVar3 = 0x1d;
        goto LAB_0040ba7c;
      }
    }
    if (uVar2 - 0xc80 < 300) {
      uVar3 = 0xc;
      goto LAB_0040ba7c;
    }
    if (uVar2 - 4000 < 1000) {
      uVar3 = 5;
      goto LAB_0040ba4c;
    }
  }
  uVar3 = 0xffff;
LAB_0040ba4c:
  *(undefined4 *)((long)&param_1->_IO_read_end + 4) = uVar3;
  return 0;
}


