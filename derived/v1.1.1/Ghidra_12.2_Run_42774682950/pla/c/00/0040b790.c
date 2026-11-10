/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040b790; name: FUN_0040b790
 */


undefined8 FUN_0040b790(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(undefined8 **)PTR_stdout_04372328 == param_1 ||
      *(undefined8 **)PTR_stderr_04372330 == param_1) ||
      *(undefined8 **)PTR_stdin_04372360 == param_1) {
    return 0;
  }
  uVar3 = nn::fs::FlushFile(*param_1);
  uVar2 = (uint)uVar3;
  if (uVar2 == 0) {
    return uVar3;
  }
  if ((uVar2 & 0x1ff) == 2) {
    uVar1 = uVar2 & 0x3ffe00;
    if (uVar1 == 0x400) {
      uVar4 = 0x11;
    }
    else if (uVar1 == 0x200) {
      uVar4 = 2;
    }
    else {
      uVar2 = uVar2 >> 9 & 0x1fff;
      if (uVar2 - 0x1e < 0x10) {
        uVar4 = 0x1c;
      }
      else if (uVar1 < 0x1a00) {
        if (uVar1 == 0xe00) {
          uVar4 = 0x10;
        }
        else if (uVar1 == 0x1000) {
          uVar4 = 0x27;
        }
        else {
LAB_0040b8b8:
          if (299 < uVar2 - 0xc80) {
            if (999 < uVar2 - 4000) goto LAB_0040b810;
            uVar4 = 5;
            goto LAB_0040b814;
          }
          uVar4 = 0xc;
        }
      }
      else if (uVar1 == 0x1a00) {
        uVar4 = 0xb;
      }
      else if (uVar1 == 0x177200) {
        uVar4 = 0x26;
      }
      else {
        if (uVar1 != 0x177a00) goto LAB_0040b8b8;
        uVar4 = 0x1d;
      }
    }
    *(undefined4 *)((long)param_1 + 0x14) = uVar4;
  }
  else {
LAB_0040b810:
    uVar4 = 0xffff;
LAB_0040b814:
    *(undefined4 *)((long)param_1 + 0x14) = uVar4;
  }
  return 0xffffffff;
}


