/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f50cf4; name: FUN_02f50cf4
 */


void FUN_02f50cf4(long param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 600))();
  if (uVar1 != 0) {
    if (*(int *)(*(long *)(param_1 + 0x78) + 0xd8) == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)**(undefined8 **)(*(long *)(param_1 + 0x78) + 0xd0);
    }
    if ((*(int *)((long)plVar5 + 0x104) == 3) &&
       (puVar3 = (undefined8 *)(*DAT_0442d138)(0,0x38), puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &PTR_LAB_042af898;
      puVar3[1] = param_1;
      puVar3[2] = plVar5;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      puVar4 = *(undefined4 **)(puVar3[2] + 0x110);
      if ((puVar4 != (undefined4 *)0x0) &&
         (iVar2 = FUN_02f0869c(puVar3,*puVar4,puVar4[2]), iVar2 == 1)) {
        FUN_02f572e8(puVar3);
      }
      if (*(long *)(param_1 + 0x88) == 0) {
        *(undefined8 **)(param_1 + 0x88) = puVar3;
        puVar3[6] = 0;
      }
      else {
        puVar3[6] = *(long *)(param_1 + 0x88);
        *(undefined8 **)(param_1 + 0x88) = puVar3;
      }
    }
    if (uVar1 != 1) {
      uVar6 = 1;
      do {
        if (uVar6 < *(uint *)(*(long *)(param_1 + 0x78) + 0xd8)) {
          plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 0x78) + 0xd0) + uVar6 * 8);
        }
        else {
          plVar5 = (long *)0x0;
        }
        if ((*(int *)((long)plVar5 + 0x104) == 3) &&
           (puVar3 = (undefined8 *)(*DAT_0442d138)(0,0x38), puVar3 != (undefined8 *)0x0)) {
          *puVar3 = &PTR_LAB_042af898;
          puVar3[1] = param_1;
          puVar3[2] = plVar5;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          (**(code **)(*plVar5 + 0x10))(plVar5);
          puVar4 = *(undefined4 **)(puVar3[2] + 0x110);
          if ((puVar4 != (undefined4 *)0x0) &&
             (iVar2 = FUN_02f0869c(puVar3,*puVar4,puVar4[2]), iVar2 == 1)) {
            FUN_02f572e8(puVar3);
          }
          if (*(long *)(param_1 + 0x88) == 0) {
            *(undefined8 **)(param_1 + 0x88) = puVar3;
            puVar3[6] = 0;
          }
          else {
            puVar3[6] = *(long *)(param_1 + 0x88);
            *(undefined8 **)(param_1 + 0x88) = puVar3;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
  }
  return;
}


