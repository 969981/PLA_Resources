/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f29984; name: FUN_02f29984
 */


long FUN_02f29984(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if ((*(byte *)(param_1 + 0x33c) & 3) == 1) {
    lVar6 = *(long *)(param_1 + 800);
    if (lVar6 != 0) goto LAB_02f29a8c;
LAB_02f299b4:
    bVar1 = false;
  }
  else {
    uVar7 = 0xf;
    if ((*(byte *)(param_1 + 0x33c) & 1) != 0) {
      uVar7 = 0;
    }
    FUN_02f29158(param_1,uVar7);
    lVar6 = *(long *)(param_1 + 800);
    if (lVar6 == 0) goto LAB_02f299b4;
LAB_02f29a8c:
    plVar4 = *(long **)(lVar6 + 0x60);
    if (plVar4 == (long *)0x0) goto LAB_02f299b4;
    (**(code **)(*plVar4 + 0x58))(plVar4,param_1 + 0x78);
    bVar1 = true;
  }
  lVar6 = FUN_02f29c6c(param_1);
  if (*(int *)(param_1 + 0x340) == 1) {
    *(undefined2 *)(param_1 + 0x33a) = *(undefined2 *)(param_1 + 0x338);
  }
  if (*(long *)(param_1 + 8) != 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    if ((*(byte *)(param_1 + 0x50) >> 1 & 1) != 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x9c);
    }
    *(undefined4 *)(param_1 + 0x98) = uVar7;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x10);
    local_24[0] = 1;
    local_28[0] = 0;
    uStack_34 = *(undefined4 *)(lVar6 + 8);
    local_38 = 0;
    if ((*(byte *)(param_1 + 0xa0) >> 1 & 1) == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = &local_38;
    }
    FUN_02f259a4(0x3f800000,param_1,*(long *)(param_1 + 8),uStack_34,0,local_28,local_24,puVar5);
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
  }
  if (bVar1) {
    plVar4 = *(long **)(*(long *)(param_1 + 800) + 0x60);
    (**(code **)(*plVar4 + 0x60))(plVar4,lVar6);
    local_40 = *(undefined8 **)(param_1 + 0x318);
    if (local_40 != (undefined8 *)0x0) goto LAB_02f29ad4;
LAB_02f29a48:
    iVar2 = *(int *)(param_1 + 0x310);
joined_r0x02f29b80:
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)(*DAT_0442d138)(5,0x50);
      if (puVar3 != (undefined8 *)0x0) {
        uVar7 = *(undefined4 *)(param_1 + 0x314);
        *puVar3 = &PTR_FUN_042ac958;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined4 *)(puVar3 + 1) = uVar7;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        *(undefined8 **)(param_1 + 0x318) = puVar3;
        iVar2 = FUN_02f2a3c8(puVar3,DAT_042ab258,*(undefined4 *)(param_1 + 0x310));
        local_40 = *(undefined8 **)(param_1 + 0x318);
        if (iVar2 == 1) {
          if (local_40 == (undefined8 *)0x0) {
            local_40 = (undefined8 *)0x0;
            goto joined_r0x02f29c64;
          }
          goto LAB_02f29b00;
        }
        if (local_40 != (undefined8 *)0x0) {
          (**(code **)*local_40)(local_40);
          (*DAT_0442d150)(5,local_40);
        }
      }
      *(undefined8 *)(param_1 + 0x318) = 0;
    }
    local_40 = (undefined8 *)0x0;
  }
  else {
    local_40 = *(undefined8 **)(param_1 + 0x318);
    if (local_40 == (undefined8 *)0x0) goto LAB_02f29a48;
LAB_02f29ad4:
    if ((*(int *)(param_1 + 0x310) != *(int *)((long)local_40 + 0x4c)) ||
       (*(int *)(param_1 + 0x314) != *(int *)(local_40 + 1))) {
      (**(code **)*local_40)(local_40);
      (*DAT_0442d150)(5,local_40);
      *(undefined8 *)(param_1 + 0x318) = 0;
      iVar2 = *(int *)(param_1 + 0x310);
      goto joined_r0x02f29b80;
    }
LAB_02f29b00:
    FUN_02f29f20(*(undefined4 *)(param_1 + 0x9c),lVar6,local_40);
    if ((*(byte *)(param_1 + 0xa0) & 0x7c) != 0) {
      FUN_02ea5578(DAT_0440a188,*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x10),local_40,
                   *(undefined4 *)(local_40 + 1));
    }
  }
joined_r0x02f29c64:
  if (bVar1) {
    plVar4 = *(long **)(*(long *)(param_1 + 800) + 0x60);
    (**(code **)(*plVar4 + 0x68))(plVar4,lVar6,local_40);
  }
  return lVar6;
}


