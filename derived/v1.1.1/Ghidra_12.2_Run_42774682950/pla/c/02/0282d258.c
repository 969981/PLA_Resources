/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282d258; name: FUN_0282d258
 */


void FUN_0282d258(long param_1,int param_2,uint param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0282d3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x50))(*(long **)(param_1 + 0x10),param_1 + 0x18,0);
    return;
  }
  *(int *)(param_1 + 0x98) = param_2;
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_0282d0b4(param_1);
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                    (*(long **)(param_1 + 0x10),param_1 + 0x58);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 200);
  *(ulong *)(param_1 + 0xc0) =
       CONCAT44((int)((ulong)uVar2 >> 0x20),(float)uVar2 + *(float *)(param_1 + 0xb0) * 0.5);
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_0282d0b4(param_1);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                      (*(long **)(param_1 + 0x10),param_1 + 0x58);
    uVar3 = (undefined4)((ulong)uVar2 >> 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 200);
    fVar4 = (float)uVar2 + *(float *)(param_1 + 0xb0) * 0.5;
    *(undefined8 *)(param_1 + 200) = uStack_48;
    *(ulong *)(param_1 + 0xc0) = CONCAT44(uVar3,fVar4);
    fVar1 = (float)(int)(float)param_3;
    if (*(char *)(param_1 + 0xd4) != '\0') {
      fVar1 = (float)param_3;
    }
    local_50 = CONCAT44(uVar3,fVar4 + *(float *)(param_1 + 0xd0) * fVar1);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
              (*(long **)(param_1 + 0x10),param_1 + 0x38,&local_50);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x50))(*(long **)(param_1 + 0x10),param_1 + 0x18,1);
  return;
}


