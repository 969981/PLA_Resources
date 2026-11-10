/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f51010; name: FUN_02f51010
 */


void FUN_02f51010(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_80;
  undefined1 local_78;
  long local_70;
  uint local_68;
  
  plVar7 = (long *)(param_1 + 0x70);
  plVar4 = (long *)*plVar7;
  if ((plVar4 == (long *)0x0) || (param_3 + param_2 < (int)plVar4[2])) {
    return;
  }
  if (plVar4[1] == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *plVar7 = 0;
  }
  else {
    *plVar7 = plVar4[1];
  }
  do {
    lVar5 = plVar4[2];
    iVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (iVar1 == 0) {
      plVar6 = (long *)plVar4[3];
      iVar1 = (int)plVar4[4];
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 != 0) {
        do {
          if ((((*(long **)(lVar5 + 0x80) == plVar6) && (*(int *)(lVar5 + 0x88) == iVar1)) &&
              ((*(byte *)(lVar5 + 0x5a) & 0xe) == 0)) &&
             (uVar3 = FUN_02f3c408(lVar5), (uVar3 & 1) == 0)) goto LAB_02f511d0;
          lVar5 = *(long *)(lVar5 + 8);
        } while (lVar5 != 0);
        plVar6 = (long *)plVar4[3];
        iVar1 = (int)plVar4[4];
        for (puVar2 = *(undefined8 **)(param_1 + 0x30); puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)puVar2[1]) {
          if ((((long *)puVar2[0x10] == plVar6) && (*(int *)(puVar2 + 0x11) == iVar1)) &&
             ((*(byte *)((long)puVar2 + 0x5a) & 0xe) == 0)) goto LAB_02f51188;
        }
      }
      puVar2 = (undefined8 *)(*DAT_0442d138)(0,0xb0);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined2 *)(puVar2 + 0xb) = 0;
        puVar2[5] = &PTR_FUN_042af7e8;
        puVar2[6] = 0;
        *puVar2 = &PTR_LAB_042af730;
        puVar2[0x10] = plVar6;
        *(int *)(puVar2 + 0x11) = iVar1;
        puVar2[0x12] = 0;
        *(undefined4 *)(puVar2 + 0x15) = 0;
        puVar2[9] = 0;
        puVar2[10] = 0xffffffff3f800000;
        *(byte *)((long)puVar2 + 0x5a) = *(byte *)((long)puVar2 + 0x5a) & 0xe0;
        puVar2[2] = param_1;
        puVar2[3] = &PTR_LAB_042af7c0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        puVar2[0xc] = &PTR_LAB_042af800;
        puVar2[0xd] = 0;
        *(undefined4 *)(puVar2 + 0x13) = 0xffffffff;
        *(byte *)((long)puVar2 + 0xac) = *(byte *)((long)puVar2 + 0xac) & 0xfc;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
        *(int *)(puVar2 + 9) = *(int *)(puVar2 + 9) + 1;
        lVar5 = puVar2[2];
        if (lVar5 != 0) {
          if (*(long *)(lVar5 + 0x30) == 0) {
            *(undefined8 **)(lVar5 + 0x30) = puVar2;
            puVar2[1] = 0;
          }
          else {
            puVar2[1] = *(long *)(lVar5 + 0x30);
            *(undefined8 **)(lVar5 + 0x30) = puVar2;
          }
          *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
        }
LAB_02f51188:
        *(int *)(puVar2 + 0x15) =
             *(int *)(*(long *)(*(long *)(param_1 + 0x78) + 0x100) + 4) + (int)plVar4[6];
        local_70 = *(long *)((long)plVar4 + 0x24);
        local_68 = (int)plVar4[6] - (int)plVar4[2];
        FUN_02f3bf24(puVar2,&local_70);
        if ((*(byte *)(param_1 + 0x5a) >> 1 & 1) != 0) {
          local_80 = 0x400000000;
          local_78 = 0;
          FUN_02f3c048(puVar2,&local_80,*(undefined4 *)(param_1 + 0x54));
        }
        goto LAB_02f511d4;
      }
LAB_02f511d0:
      if (plVar4 != (long *)0x0) goto LAB_02f511d4;
    }
    else {
      if (iVar1 == 1) {
        local_68 = local_68 & 0xffffff00;
        local_70 = plVar4[4];
        FUN_02f3c048(plVar4[3],&local_70,(int)lVar5 - param_2);
      }
LAB_02f511d4:
      (**(code **)*plVar4)(plVar4);
      (*DAT_0442d150)(0,plVar4);
    }
    plVar4 = (long *)*plVar7;
    if (plVar4 == (long *)0x0) {
      return;
    }
    if (param_3 + param_2 < (int)plVar4[2]) {
      return;
    }
    if (plVar4[1] == 0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      *plVar7 = 0;
    }
    else {
      *plVar7 = plVar4[1];
    }
  } while( true );
}


