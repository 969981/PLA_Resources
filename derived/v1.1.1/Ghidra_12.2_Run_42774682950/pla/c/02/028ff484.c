/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ff484; name: FUN_028ff484
 */


void FUN_028ff484(long *param_1,undefined8 param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar3 = *param_3;
  uVar2 = FUN_028ca890(*param_1 + 0xd0);
  if (((uVar2 & 1) != 0) && (0.0 < *(float *)(lVar3 + 4))) {
    pauVar1 = (undefined1 (*) [16])(lVar3 + 0x10);
    local_40 = *(undefined8 *)*pauVar1;
    auVar4 = NEON_ext(*pauVar1,*pauVar1,8,1);
    uStack_38 = auVar4._0_8_;
    (**(code **)param_1[2])(param_1[1],param_2,&local_40);
  }
  return;
}


