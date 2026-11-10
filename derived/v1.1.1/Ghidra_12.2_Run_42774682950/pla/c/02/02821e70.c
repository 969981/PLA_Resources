/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02821e70; name: FUN_02821e70
 */


uint FUN_02821e70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  
  *(undefined4 *)(param_1 + 200) = 0;
  uVar6 = *(uint *)(param_1 + 0x94);
  uVar7 = *(uint *)(param_1 + 0x98);
  if (uVar6 < uVar7) {
    lVar14 = *(long *)(param_1 + 0xc0);
    lVar12 = *(long *)(lVar14 + 0x8b0);
    puVar9 = (uint *)(lVar12 + 0x20);
    if (*(int *)(lVar12 + 0x28) != 0) {
      puVar9 = (uint *)(lVar12 + 0x24);
    }
    uVar6 = *puVar9;
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar7 / uVar6;
    }
    if (uVar7 == uVar8 * uVar6) {
      *(undefined4 *)(param_1 + 200) = 1;
      puVar13 = (undefined8 *)**(long **)(lVar14 + 0x838);
      puVar3 = (undefined8 *)(*(long **)(lVar14 + 0x838))[1];
      if ((puVar13 != puVar3) &&
         ((*(char *)(puVar13 + 4) != '\0' ||
          (*(int *)((long)puVar13 + 0x24) != *(int *)(param_1 + 0x90))))) {
        puVar11 = puVar13 + 6;
        do {
          puVar13 = puVar11;
          if (puVar3 == puVar13) {
            puVar13 = puVar3;
            if (puVar3 != (undefined8 *)0x0) goto LAB_02821f44;
            goto LAB_02821ec4;
          }
          puVar11 = puVar13 + 6;
        } while ((*(char *)(puVar13 + 4) != '\0') ||
                (*(int *)((long)puVar13 + 0x24) != *(int *)(param_1 + 0x90)));
      }
      if (puVar13 != (undefined8 *)0x0) {
LAB_02821f44:
        if (puVar3 != puVar13) {
          uVar1 = *puVar13;
          uVar4 = puVar13[1];
          uVar2 = puVar13[2];
          plVar5 = (long *)puVar13[3];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
          local_70 = &local_48;
          local_48 = (long *)0x0;
          uStack_68 = uVar1;
          local_60 = uVar4;
          uStack_58 = uVar2;
          local_50 = plVar5;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
          FUN_02813244(lVar14,&local_70,0);
          if (local_50 != (long *)0x0) {
            (**(code **)(*local_50 + 0x20))();
          }
          plVar10 = local_48;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))(plVar5);
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
          if (*(char *)((long)plVar10 + 0xa3) != '\0') {
            *(undefined1 *)((long)plVar10 + 0xa3) = 0;
            (**(code **)(*plVar10 + 0xa0))(plVar10,0);
          }
        }
      }
    }
LAB_02821ec4:
    uVar6 = *(int *)(param_1 + 0x98) - 1;
  }
  return uVar6;
}


