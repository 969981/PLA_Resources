/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281b94c; name: FUN_0281b94c
 */


void FUN_0281b94c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  long local_38;
  
  iVar6 = *(int *)(param_1 + 0x940);
  if (iVar6 != -1) {
    puVar1 = (undefined8 *)**(long **)(param_1 + 0x838);
    puVar4 = (undefined8 *)(*(long **)(param_1 + 0x838))[1];
    if ((puVar1 != puVar4) &&
       (*(char *)(puVar1 + 4) != '\0' || *(int *)((long)puVar1 + 0x24) != iVar6)) {
      puVar8 = puVar1 + 6;
      do {
        puVar9 = puVar8;
        puVar1 = puVar4;
        if (puVar4 == puVar9) break;
        puVar8 = puVar9 + 6;
      } while ((*(char *)(puVar9 + 4) != '\0') ||
              (puVar1 = puVar9, *(int *)((long)puVar9 + 0x24) != iVar6));
    }
    if ((puVar1 != (undefined8 *)0x0) && (puVar4 != puVar1)) {
      uVar2 = *puVar1;
      uVar5 = puVar1[1];
      uVar3 = puVar1[2];
      plVar10 = (long *)puVar1[3];
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      local_60 = &local_38;
      local_38 = 0;
      local_58 = uVar2;
      local_50 = uVar5;
      local_48 = (long *)uVar3;
      local_40 = plVar10;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      FUN_02813244(param_1,&local_60,0);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
      lVar7 = local_38;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      plVar10 = *(long **)(param_1 + 0xe8);
      local_60 = *(long **)(lVar7 + 0xa8);
      local_58 = *(undefined8 *)(lVar7 + 0xb0);
      local_50 = *(undefined8 *)(lVar7 + 0xb8);
      local_48 = *(long **)(lVar7 + 0xc0);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x18))();
      }
      (**(code **)(*plVar10 + 0x50))(plVar10,&local_60,0);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  return;
}


