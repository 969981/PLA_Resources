/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013622a0; name: FUN_013622a0
 */


void FUN_013622a0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_18 [8];
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  uVar2 = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  *(undefined4 *)(param_1 + 0x1ac) = uVar2;
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar3 = FUN_013646a0(*(long *)(param_1 + 0xa8) + 0xf0,auStack_18), lVar3 != 0)) {
    fVar4 = *(float *)(param_1 + 0x1a0);
    fVar5 = *(float *)(param_1 + 0x1a4);
    *(ulong *)(lVar3 + 0x228) =
         CONCAT44(*(float *)(param_1 + 0x1ac) / 1080.0,*(float *)(param_1 + 0x1a8) / 1920.0);
    *(ulong *)(lVar3 + 0x220) = CONCAT44(fVar5 / 540.0,fVar4 / 960.0);
  }
  return;
}


