/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281dc48; name: FUN_0281dc48
 */


void FUN_0281dc48(long param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long **local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x940) != -1) {
    puVar1 = (undefined8 *)**(long **)(param_1 + 0x838);
    puVar4 = (undefined8 *)(*(long **)(param_1 + 0x838))[1];
    if ((puVar1 != puVar4) && (*(char *)(puVar1 + 4) != '\0' || *(int *)((long)puVar1 + 0x24) != -1)
       ) {
      puVar9 = puVar1 + 6;
      do {
        puVar11 = puVar9;
        puVar1 = puVar4;
        if (puVar4 == puVar11) break;
        puVar9 = puVar11 + 6;
      } while ((*(char *)(puVar11 + 4) != '\0') ||
              (puVar1 = puVar11, *(int *)((long)puVar11 + 0x24) != -1));
    }
    if ((puVar1 != (undefined8 *)0x0) && (puVar4 != puVar1)) {
      uVar2 = *puVar1;
      uVar5 = puVar1[1];
      uVar3 = puVar1[2];
      plVar6 = (long *)puVar1[3];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      local_80 = &local_58;
      local_58 = (long *)0x0;
      local_78 = uVar2;
      local_70 = uVar5;
      local_68 = (long *)uVar3;
      local_60 = plVar6;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      FUN_02813244(param_1,&local_80,0);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      plVar8 = local_58;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      if (*(byte *)((long)plVar8 + 0xa3) != (param_2 & 1)) {
        *(byte *)((long)plVar8 + 0xa3) = param_2 & 1;
        (**(code **)(*plVar8 + 0xa0))(plVar8);
      }
      pcVar10 = *(code **)(param_1 + 0x110);
      if (pcVar10 != (code *)0x0) {
        local_80 = (long **)*puVar1;
        uVar7 = *(undefined4 *)(param_1 + 0x940);
        local_78 = puVar1[1];
        local_70 = puVar1[2];
        local_68 = (long *)puVar1[3];
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x18))();
          pcVar10 = *(code **)(param_1 + 0x110);
        }
        local_44 = *(undefined4 *)(puVar1 + 5);
        local_58 = (long *)CONCAT44(local_58._4_4_,uVar7);
        (*pcVar10)(param_1 + 0x130,&local_58,&local_80,&local_44);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
  }
  return;
}


