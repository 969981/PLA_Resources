/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2bfd4; name: FUN_02b2bfd4
 */


void FUN_02b2bfd4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *local_98;
  long local_90;
  char *local_88;
  long lStack_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  long *local_48;
  
  lVar7 = *param_2;
  uVar8 = (*(long *)(lVar7 + 0xb8) - *(long *)(lVar7 + 0xb0) >> 4) * 0xc4ec4ec5;
  if ((int)uVar8 == 0) {
    return;
  }
  uVar10 = 0;
  do {
    lVar9 = *(long *)(*(long *)(lVar7 + 0xb0) + uVar10 * 0xd0 + 0x48);
    local_70 = *(undefined8 *)(lVar9 + 8);
    local_68 = *(undefined8 *)(lVar9 + 0x10);
    local_60 = *(undefined8 *)(lVar9 + 0x18);
    local_58 = *(long **)(lVar9 + 0x20);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
      lVar7 = *param_2;
    }
    puVar2 = *(undefined8 **)(lVar7 + 0x80);
    puVar6 = *(undefined8 **)(lVar7 + 0x78);
    do {
      if (puVar6 == puVar2) {
        local_48 = (long *)0x0;
        goto joined_r0x02b2c088;
      }
      FUN_02b2fb40(&local_48,*puVar6,&local_70);
      puVar6 = puVar6 + 1;
    } while (local_48 == (long *)0x0);
    FUN_02b2c214(param_1,&local_48,&local_70,uVar10 & 0xffffffff,param_2);
    local_90 = local_48[0x2d];
    local_88 = (char *)local_48[0x2e];
    lStack_80 = local_48[0x2f];
    local_78 = (long *)local_48[0x30];
    if (local_78 == (long *)0x0) {
      cVar3 = *local_88;
    }
    else {
      (**(code **)(*local_78 + 0x18))();
      cVar3 = *local_88;
    }
    if (cVar3 != '\0') {
      puVar2 = *(undefined8 **)(*param_2 + 0x80);
      puVar6 = *(undefined8 **)(*param_2 + 0x78);
      do {
        if (puVar6 == puVar2) goto joined_r0x02b2c1f0;
        FUN_02b2fb40(&local_98,*puVar6,&local_90);
        puVar6 = puVar6 + 1;
      } while (local_98 == (long *)0x0);
      FUN_02b2c214(param_1,&local_98,&local_90,uVar10 & 0xffffffff,param_2);
      if (local_98 != (long *)0x0) {
        plVar1 = local_98 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
    }
joined_r0x02b2c1f0:
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
joined_r0x02b2c088:
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == (uVar8 & 0xffffffff)) {
      return;
    }
    lVar7 = *param_2;
  } while( true );
}


