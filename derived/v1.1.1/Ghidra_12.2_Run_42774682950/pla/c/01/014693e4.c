/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014693e4; name: FUN_014693e4
 */


void FUN_014693e4(long param_1,float *param_2,byte *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = 0x7f7e4efd5cc9936b;
  pcStack_48 = "FabhView";
  local_40 = 8;
  lVar1 = FUN_0146fe3c(*(undefined8 *)(param_1 + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar2 = (uint)*param_3;
  if (1 < uVar2) {
    uVar2 = 0;
  }
  lVar3 = *(long *)(lVar1 + (ulong)uVar2 * 0x28 + 0x5c0);
  if (lVar3 != 0) {
    fVar4 = param_2[1];
    lVar1 = lVar1 + (ulong)uVar2 * 0x28;
    fVar5 = *param_2 + -960.0;
    *(float *)(lVar1 + 0x5b8) = *param_2;
    *(float *)(lVar1 + 0x5b0) = fVar5;
    fVar6 = 540.0 - fVar4;
    *(float *)(lVar1 + 0x5b4) = fVar6;
    *(float *)(lVar1 + 0x5bc) = fVar4;
    *(float *)(lVar3 + 0x30) = fVar5;
    *(float *)(lVar3 + 0x34) = fVar6;
    *(undefined4 *)(lVar3 + 0x38) = 0;
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 0x10;
  }
  return;
}


