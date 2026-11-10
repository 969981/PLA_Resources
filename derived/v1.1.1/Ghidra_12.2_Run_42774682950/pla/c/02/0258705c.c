/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0258705c; name: FUN_0258705c
 */


undefined8 FUN_0258705c(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  
  lVar10 = *(long *)(param_1 + 0x58);
  if (lVar10 != 0) {
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x50))((undefined8 *)(lVar10 + 0x50));
    lVar8 = FUN_02585420();
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)lVar8) {
        if ((*param_2 != 0) &&
           (iVar5 = *(int *)(*param_2 + 0x2c), iVar4 = FUN_025853e8(lVar10), iVar5 < iVar4)) {
          return 0;
        }
        iVar5 = FUN_025853e8(lVar10);
        if (iVar5 == 1) {
          local_58 = 0;
          local_50 = 0;
          local_40 = &DAT_cbf29ce484222645;
          local_38 = 0x100000000;
          local_60[0] = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x8c);
          puVar9 = (undefined8 *)FUN_02585130();
          local_58 = *puVar9;
          puVar9 = (undefined8 *)FUN_02585120(*(undefined8 *)(param_1 + 0x58));
          local_50 = *puVar9;
          local_48 = 0xa0;
          puVar9 = (undefined8 *)FUN_02585128(*(undefined8 *)(param_1 + 0x58));
          local_40 = (undefined1 *)*puVar9;
          uVar6 = FUN_025853e0(lVar10);
          local_38 = CONCAT44(local_38._4_4_,uVar6);
          uVar6 = FUN_025853e8(lVar10);
          local_38 = CONCAT44(uVar6,(undefined4)local_38);
          FUN_025880e8(*(undefined8 *)(param_1 + 0x70),local_60);
          lVar10 = *(long *)(param_1 + 0x58);
          goto joined_r0x02587200;
        }
        break;
      }
    }
    lVar10 = *(long *)(param_1 + 0x58);
joined_r0x02587200:
    if (lVar10 == 0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    else {
      FUN_02837c00(*(undefined8 *)(lVar10 + 0x68),1);
      plVar7 = *(long **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (plVar7 != (long *)0x0) {
        lVar10 = plVar7[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  if ((*param_2 != 0) && (FUN_02585a40(&local_68,param_1), local_68 != (long *)0x0)) {
    lVar10 = local_68[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 1) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return 1;
}


