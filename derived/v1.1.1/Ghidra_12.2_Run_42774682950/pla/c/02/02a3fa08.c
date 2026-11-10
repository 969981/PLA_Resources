/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3fa08; name: FUN_02a3fa08
 */


void FUN_02a3fa08(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined1 uVar2;
  ulong uVar3;
  int iVar4;
  int *piVar5;
  int aiStack_280 [128];
  int *piVar6;
  int local_60 [16];
  
  uVar3 = 0;
  uVar2 = (&DAT_03a80f80)[param_2 & 0xffff];
  local_60[0xc] = 0;
  local_60[0xd] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  local_60[8] = 0;
  local_60[9] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  iVar4 = -0x30;
  piVar6 = (int *)register0x00000008;
  do {
    iVar1 = iVar4 + 8;
    piVar5 = piVar6;
    if (0 < iVar1) goto LAB_02a3fa8c;
    piVar5 = (int *)((long)aiStack_280 + (long)iVar4 + 0x200);
    while( true ) {
      iVar4 = *piVar5;
      local_60[uVar3] = iVar4;
      uVar3 = (ulong)((int)uVar3 + 1);
      if (iVar4 == -0x10000) {
        FUN_02a3e7b8(param_1,param_2,uVar2,local_60);
        return;
      }
      iVar4 = iVar1;
      if (iVar1 < 0) break;
      piVar5 = piVar6;
LAB_02a3fa8c:
      piVar6 = piVar5 + 2;
    }
  } while( true );
}


