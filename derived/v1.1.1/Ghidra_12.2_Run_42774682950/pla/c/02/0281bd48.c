/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281bd48; name: FUN_0281bd48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0281bd48(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long **pplVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  long **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  long *local_68;
  
  if (*(int *)(*(long *)(param_1 + 0x878) + 0x68) == 0) {
    iVar10 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
    uVar7 = _UNK_03888fc8;
    pplVar6 = _DAT_03888fc0;
    uVar14 = 1;
    if (iVar10 != 0) {
      uVar15 = 0;
      do {
        uVar12 = (**(code **)(**(long **)(param_1 + 0x100) + 0x40))
                           (*(long **)(param_1 + 0x100),uVar15);
        if ((uVar12 & 1) != 0) {
          puVar1 = (undefined8 *)**(long **)(param_1 + 0x838);
          puVar3 = (undefined8 *)(*(long **)(param_1 + 0x838))[1];
          if ((puVar1 != puVar3) &&
             (*(char *)(puVar1 + 4) != '\0' || *(uint *)((long)puVar1 + 0x24) != uVar15)) {
            puVar9 = puVar1 + 6;
            do {
              puVar13 = puVar9;
              puVar1 = puVar3;
              if (puVar3 == puVar13) break;
              puVar9 = puVar13 + 6;
            } while ((*(char *)(puVar13 + 4) != '\0') ||
                    (puVar1 = puVar13, *(uint *)((long)puVar13 + 0x24) != uVar15));
          }
          if ((puVar1 != (undefined8 *)0x0) && (puVar3 != puVar1)) {
            uVar14 = *puVar1;
            uVar4 = puVar1[1];
            uVar2 = puVar1[2];
            plVar5 = (long *)puVar1[3];
            if (plVar5 == (long *)0x0) {
              local_70 = (long *)0x0;
              local_68 = (long *)0x0;
              local_90 = &local_68;
              uStack_88 = uVar14;
              local_80 = uVar4;
              uStack_78 = uVar2;
            }
            else {
              (**(code **)(*plVar5 + 0x18))(plVar5);
              (**(code **)(*plVar5 + 0x18))(plVar5);
              local_68 = (long *)0x0;
              local_90 = &local_68;
              uStack_88 = uVar14;
              local_80 = uVar4;
              uStack_78 = uVar2;
              local_70 = plVar5;
              (**(code **)(*plVar5 + 0x18))(plVar5);
            }
            FUN_02813244(param_1,&local_90,0);
            if (local_70 != (long *)0x0) {
              (**(code **)(*local_70 + 0x20))();
            }
            plVar8 = local_68;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))(plVar5);
              (**(code **)(*plVar5 + 0x20))(plVar5);
            }
            if (*(char *)((long)plVar8 + 0xa3) != '\0') {
              *(undefined1 *)((long)plVar8 + 0xa3) = 0;
              (**(code **)(*plVar8 + 0xa0))(plVar8,0);
            }
            uStack_88 = uVar7;
            local_90 = pplVar6;
            (**(code **)(*plVar8 + 0x50))(plVar8,&local_90);
            *(undefined4 *)((long)puVar1 + 0x24) = 0xffffffff;
            *(undefined1 *)(puVar1 + 4) = 1;
          }
        }
        uVar15 = uVar15 + 1;
        uVar11 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
      } while (uVar15 < uVar11);
      uVar14 = 1;
    }
  }
  else {
    uVar14 = 0;
  }
  return uVar14;
}


