/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02938650; name: FUN_02938650
 */


undefined8 FUN_02938650(char *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = nn::fs::OpenFile((FileHandle *)(param_4 + 3),param_1,1);
    if (iVar2 == 0) {
      nn::fs::GetFileSize(param_4,param_4[3]);
LAB_02938718:
      *(undefined4 *)((long)param_4 + 0xc) = 0;
      param_4[2] = (ulong)param_2;
      return 1;
    }
  }
  else if (param_2 - 1 < 2) {
    uVar1 = nn::fs::CreateFile(param_1,0);
    if ((uVar1 & 0x3fffff) == 0x202) {
      return 0x24;
    }
    if (((((uVar1 & 0x1ff) != 2) || ((uVar1 & 0x3ffe00) == 0x400)) || ((uVar1 & 0x3ffe00) == 0xe00))
       || (0xf < (uVar1 >> 9 & 0x1fff) - 0x1e)) {
      uVar1 = nn::fs::OpenFile((FileHandle *)(param_4 + 3),param_1,6);
      if ((uVar1 & 0x3fffff) == 0x202) {
        return 0x42;
      }
      if (uVar1 == 0) {
        *param_4 = 0;
        goto LAB_02938718;
      }
    }
  }
  return 2;
}


