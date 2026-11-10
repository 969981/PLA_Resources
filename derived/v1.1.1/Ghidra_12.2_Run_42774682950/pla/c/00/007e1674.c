/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e1674; name: FUN_007e1674
 */


void FUN_007e1674(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  int local_70 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar2 = local_70;
  local_60 = *param_3;
  uStack_58 = param_3[1];
  local_50 = param_3[2];
  uStack_48 = param_3[3];
  FUN_00847298(local_40,param_2,&local_60);
  if (local_40[0] == 0) {
    if (*(int *)(param_2 + 0x68) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        puVar1 = (undefined2 *)(*(long *)(param_2 + 0x60) + lVar3);
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 4) = 0;
        memset(puVar1 + 8,0,4);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x18;
      } while (uVar4 < *(uint *)(param_2 + 0x68));
    }
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    local_70[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_28);
  }
  else {
    piVar2 = local_40;
  }
  FUN_007ee578(param_1,piVar2);
  return;
}


