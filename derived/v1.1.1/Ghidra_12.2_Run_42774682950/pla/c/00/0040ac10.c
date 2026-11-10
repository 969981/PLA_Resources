/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040ac10; name: FUN_0040ac10
 */


long FUN_0040ac10(byte *param_1,long param_2,long param_3,FILE *param_4)

{
  uint uVar1;
  byte *__s;
  uint uVar2;
  undefined4 uVar3;
  long local_30;
  long local_28;
  
  local_30 = -1;
  local_28 = 0;
  if (*(FILE **)PTR_stdout_04372328 == param_4 || *(FILE **)PTR_stderr_04372330 == param_4) {
    if ((int)(param_3 * param_2) == 1) {
      fputc((uint)*param_1,param_4);
      return local_30;
    }
    __s = &DAT_038da8c3;
    if (param_1 != (byte *)0x0) {
      __s = param_1;
    }
    fputs((char *)__s,param_4);
    return local_30;
  }
  if (*(FILE **)PTR_stdin_04372360 == param_4) {
    return -1;
  }
  uVar2 = nn::fs::GetFileSize(&local_28,*(undefined8 *)param_4);
  if (uVar2 == 0) {
    if (local_28 < (long)param_4->_IO_read_ptr) {
      return local_30;
    }
    uVar2 = nn::fs::ReadFile(&local_30,*(undefined8 *)param_4,param_4->_IO_read_ptr,param_1,
                             param_3 * param_2);
    if (uVar2 == 0) {
      param_4->_IO_read_ptr = param_4->_IO_read_ptr + local_30;
      return local_30;
    }
  }
  if ((uVar2 & 0x1ff) == 2) {
    uVar1 = uVar2 & 0x3ffe00;
    if (uVar1 == 0x400) {
      uVar3 = 0x11;
    }
    else if (uVar1 == 0x200) {
      uVar3 = 2;
    }
    else {
      uVar2 = uVar2 >> 9 & 0x1fff;
      if (uVar2 - 0x1e < 0x10) {
        uVar3 = 0x1c;
      }
      else if (uVar1 < 0x1a00) {
        if (uVar1 == 0xe00) {
          uVar3 = 0x10;
        }
        else if (uVar1 == 0x1000) {
          uVar3 = 0x27;
        }
        else {
LAB_0040adc4:
          if (299 < uVar2 - 0xc80) {
            if (uVar2 - 4000 < 1000) {
              *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 5;
              return local_30;
            }
            goto LAB_0040ad14;
          }
          uVar3 = 0xc;
        }
      }
      else if (uVar1 == 0x1a00) {
        uVar3 = 0xb;
      }
      else if (uVar1 == 0x177200) {
        uVar3 = 0x26;
      }
      else {
        if (uVar1 != 0x177a00) goto LAB_0040adc4;
        uVar3 = 0x1d;
      }
    }
    *(undefined4 *)((long)&param_4->_IO_read_end + 4) = uVar3;
  }
  else {
LAB_0040ad14:
    *(undefined4 *)((long)&param_4->_IO_read_end + 4) = 0xffff;
  }
  return local_30;
}


