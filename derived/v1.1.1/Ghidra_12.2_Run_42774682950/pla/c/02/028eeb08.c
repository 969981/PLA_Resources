/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028eeb08; name: FUN_028eeb08
 */


void FUN_028eeb08(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = (**(code **)(**(long **)(param_2 + 8) + 0x30))();
  if (*(long *)(param_2 + 0x48) == 0) {
    fVar5 = (float)(**(code **)(**(long **)(param_2 + 8) + 0x38))();
  }
  else {
    fVar5 = *(float *)(*(long *)(param_2 + 0x48) + 0x28);
  }
  fVar3 = (float)(**(code **)(**(long **)(param_2 + 0x30) + 0xf0))();
  if (fVar5 * fVar3 == 0.0) goto LAB_028eec30;
  if (iVar1 == 0) {
    fVar4 = (float)(**(code **)(**(long **)(param_2 + 0x28) + 0x80))();
    uVar2 = (**(code **)(**(long **)(param_2 + 0x28) + 0x88))();
    fVar4 = *(float *)(param_2 + 0x38) + fVar4 * (float)uVar2 * (float)param_1;
LAB_028eebc8:
    *(float *)(param_2 + 0x38) = fVar4;
  }
  else {
    if (iVar1 == 1) {
      fVar4 = *(float *)(param_2 + 0x38) + (float)param_1;
      goto LAB_028eebc8;
    }
    fVar4 = *(float *)(param_2 + 0x38);
  }
  fVar4 = fVar4 / (fVar5 * fVar3);
  if (fVar4 < 1.0) {
    (**(code **)(**(long **)(param_2 + 0x28) + 0xb0))(1.0 - fVar4);
    (**(code **)(**(long **)(param_2 + 0x30) + 0xb0))(fVar4);
                    /* WARNING: Could not recover jumptable at 0x028eec2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x98))(param_1);
    return;
  }
LAB_028eec30:
  FUN_028ee9d0(param_1,0xbf800000,param_2);
  return;
}


