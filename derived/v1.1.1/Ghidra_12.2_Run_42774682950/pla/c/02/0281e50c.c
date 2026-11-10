/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281e50c; name: FUN_0281e50c
 */


undefined8 FUN_0281e50c(long param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long local_80 [3];
  undefined1 *local_68;
  char *local_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  if (param_2 == 0) {
    uVar8 = 1;
  }
  else {
    local_68 = (undefined1 *)0x898ac1bbdbe7b512;
    local_60 = "PLAY_UI_COMMON_CATCH";
    local_58 = 0x14;
    local_50 = (long *)0x0;
    FUN_028354b0(&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    lVar9 = *(long *)(param_1 + 0x8b0);
    piVar1 = (int *)(lVar9 + 0x20);
    if (*(int *)(lVar9 + 0x28) != 0) {
      piVar1 = (int *)(lVar9 + 0x24);
    }
    *(int *)(param_1 + 0x940) = *(int *)(lVar9 + 0x14) + *piVar1 * *(int *)(lVar9 + 0x10);
    FUN_0281b94c(param_1);
    FUN_0281dc48(param_1,1);
    if (*(int *)(param_1 + 0x940) != -1) {
      puVar10 = (undefined8 *)**(long **)(param_1 + 0x838);
      puVar4 = (undefined8 *)(*(long **)(param_1 + 0x838))[1];
      if ((puVar10 != puVar4) &&
         ((*(char *)(puVar10 + 4) != '\0' || (*(int *)((long)puVar10 + 0x24) != -1)))) {
        puVar7 = puVar10 + 6;
        do {
          puVar10 = puVar7;
          if (puVar4 == puVar10) {
            puVar10 = puVar4;
            if (puVar4 != (undefined8 *)0x0) goto LAB_0281e60c;
            goto LAB_0281e6f0;
          }
          puVar7 = puVar10 + 6;
        } while ((*(char *)(puVar10 + 4) != '\0') || (*(int *)((long)puVar10 + 0x24) != -1));
      }
      if (puVar10 != (undefined8 *)0x0) {
LAB_0281e60c:
        if (puVar4 != puVar10) {
          uVar2 = *puVar10;
          uVar5 = puVar10[1];
          uVar3 = puVar10[2];
          plVar6 = (long *)puVar10[3];
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
          local_80[0] = 0;
          local_68 = (undefined1 *)local_80;
          local_60 = (char *)uVar2;
          local_58 = uVar5;
          local_50 = (long *)uVar3;
          local_48 = plVar6;
          if (plVar6 != (long *)0x0) {
            local_68 = (undefined1 *)local_80;
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
          FUN_02813244(param_1,&local_68,0);
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x20))();
          }
          lVar9 = local_80[0];
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))(plVar6);
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
          if (lVar9 != 0) {
            local_80[0] = CONCAT44((float)*(int *)(param_1 + 0x998),(float)*(int *)(param_1 + 0x994)
                                  );
            local_80[1] = 0;
            lVar11 = *(long *)(param_1 + 0x880);
            if (lVar11 != 0) {
              local_68 = *(undefined1 **)(lVar9 + 0xa8);
              local_60 = *(char **)(lVar9 + 0xb0);
              local_58 = *(undefined8 *)(lVar9 + 0xb8);
              local_50 = *(long **)(lVar9 + 0xc0);
              if (local_50 != (long *)0x0) {
                (**(code **)(*local_50 + 0x18))();
              }
              FUN_0281133c(lVar11,&local_68,local_80);
              if (local_50 != (long *)0x0) {
                (**(code **)(*local_50 + 0x20))();
              }
            }
          }
        }
      }
    }
LAB_0281e6f0:
    uVar8 = 0;
    *(undefined1 *)(param_1 + 0xa4) = 1;
  }
  *(undefined1 *)(param_1 + 0xa1) = uVar8;
  return 1;
}


