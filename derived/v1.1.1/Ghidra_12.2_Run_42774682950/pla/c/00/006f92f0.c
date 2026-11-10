/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f92f0; name: FUN_006f92f0
 */


void FUN_006f92f0(long *param_1,byte param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 local_98;
  long *local_90;
  undefined1 auStack_88 [8];
  long *local_80;
  undefined1 auStack_78 [8];
  ulong local_70;
  long local_60;
  long local_50;
  long *local_48;
  
  bVar4 = *(byte *)(param_1 + 2);
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = param_1[3];
  }
  if (uVar2 != 0) {
    local_50 = 0;
    local_48 = (long *)0x0;
    if ((param_1[1] != 0) &&
       (local_48 = (long *)std::__shared_weak_count::lock(), local_48 != (long *)0x0)) {
      local_50 = *param_1;
      if (local_50 != 0) {
                    /* try { // try from 006f9354 to 006f935f has its CatchHandler @ 006f9574 */
        FUN_00715c38(auStack_78,0);
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          lVar9 = (long)param_1 + 0x11;
        }
        else {
          lVar9 = param_1[4];
        }
                    /* try { // try from 006f9384 to 006f93a3 has its CatchHandler @ 006f9588 */
        FUN_006f95ac(auStack_78,lVar9);
        if (local_60 == 0) {
          puVar7 = (ulong *)(local_70 & 0xfffffffffffffffe);
          if ((local_70 & 1) != 0) {
            puVar7 = (ulong *)*puVar7;
          }
          local_60 = FUN_00724b50(puVar7);
        }
        *(byte *)(local_60 + 0x48) = param_2 & 1;
        pbVar10 = (byte *)*param_3;
        pbVar3 = (byte *)param_3[1];
        if (pbVar10 != pbVar3) {
          if (local_60 == 0) goto LAB_006f93d4;
LAB_006f93c4:
          if ((*pbVar10 & 1) != 0) goto LAB_006f93f0;
          do {
            pbVar8 = pbVar10 + 1;
            while( true ) {
              FUN_006f9750(local_60,pbVar8);
              if (pbVar3 + -0x20 == pbVar10) goto LAB_006f9418;
              pbVar10 = pbVar10 + 0x20;
              if (local_60 != 0) goto LAB_006f93c4;
LAB_006f93d4:
              puVar7 = (ulong *)(local_70 & 0xfffffffffffffffe);
              if ((local_70 & 1) != 0) {
                puVar7 = (ulong *)*puVar7;
              }
                    /* try { // try from 006f93e0 to 006f93f7 has its CatchHandler @ 006f9590 */
              local_60 = FUN_00724b50(puVar7);
              if ((*pbVar10 & 1) == 0) break;
LAB_006f93f0:
              pbVar8 = *(byte **)(pbVar10 + 0x10);
            }
          } while( true );
        }
LAB_006f9418:
        pbVar3 = (byte *)param_4[1];
        for (pbVar10 = (byte *)*param_4; pbVar10 != pbVar3; pbVar10 = pbVar10 + 0x20) {
          if (local_60 == 0) {
            puVar7 = (ulong *)(local_70 & 0xfffffffffffffffe);
            if ((local_70 & 1) != 0) {
              puVar7 = (ulong *)*puVar7;
            }
                    /* try { // try from 006f9448 to 006f945f has its CatchHandler @ 006f958c */
            local_60 = FUN_00724b50(puVar7);
            if ((*pbVar10 & 1) == 0) goto LAB_006f9434;
LAB_006f9458:
            pbVar8 = *(byte **)(pbVar10 + 0x10);
          }
          else {
            if ((*pbVar10 & 1) != 0) goto LAB_006f9458;
LAB_006f9434:
            pbVar8 = pbVar10 + 1;
          }
          FUN_006f98d0(local_60,pbVar8);
        }
        local_98 = 0;
        local_90 = (long *)0x0;
        FUN_006f9a50(auStack_88,*(undefined8 *)(local_50 + 8),auStack_78,&local_98);
        if (local_80 != (long *)0x0) {
          plVar1 = local_80 + 1;
          do {
            lVar9 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_90 != (long *)0x0) {
          plVar1 = local_90 + 1;
          do {
            lVar9 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*local_90 + 0x10))(local_90);
            std::__shared_weak_count::__release_weak();
          }
        }
        lVar9 = param_1[1];
        *param_1 = 0;
        param_1[1] = 0;
        if (lVar9 != 0) {
          std::__shared_weak_count::__release_weak();
        }
        FUN_00715c8c(auStack_78);
        if (local_48 == (long *)0x0) {
          return;
        }
      }
      plVar1 = local_48 + 1;
      do {
        lVar9 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}


