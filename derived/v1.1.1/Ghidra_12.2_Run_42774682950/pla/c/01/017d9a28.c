/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d9a28; name: FUN_017d9a28
 */


void FUN_017d9a28(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *local_58;
  undefined8 uStack_50;
  long *local_48;
  long *local_38;
  
  if (*(char *)(param_1 + 0xe0) != '\0') {
    for (lVar8 = *(long *)(param_1 + 0xf0); lVar8 != param_1 + 0xe8; lVar8 = *(long *)(lVar8 + 8)) {
      if (*param_2 == 0) {
        local_38 = (long *)0x0;
        if (*(long *)(lVar8 + 0x18) != 0) goto LAB_017d9b74;
LAB_017d9a74:
        bVar5 = local_38 == (long *)0x0;
        local_48 = (long *)0x0;
joined_r0x017d9bb0:
        if (local_38 == (long *)0x0) goto LAB_017d9aa4;
LAB_017d9a88:
        lVar7 = local_38[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 != 0) goto LAB_017d9aa4;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
        if (bVar5) goto LAB_017d9ae0;
      }
      else {
        FUN_017dca7c(&local_38);
        if (*(long *)(lVar8 + 0x18) == 0) goto LAB_017d9a74;
LAB_017d9b74:
        FUN_017dca7c(&local_48);
        bVar5 = local_38 == local_48;
        if (local_48 == (long *)0x0) goto joined_r0x017d9bb0;
        lVar7 = local_48[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 != 0) goto joined_r0x017d9bb0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))(local_48);
        if (local_38 != (long *)0x0) goto LAB_017d9a88;
LAB_017d9aa4:
        if (bVar5) {
LAB_017d9ae0:
          local_58 = (undefined8 *)0x0;
          uStack_50 = 0;
          FUN_017db6d4(&local_58,param_2);
          FUN_017daa44(param_1,&local_58,1);
          puVar4 = local_58;
          if (local_58 == (undefined8 *)0x0) {
            return;
          }
          piVar1 = (int *)(local_58 + 1);
          do {
            iVar6 = *piVar1;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 + -1 != 0) {
            return;
          }
          local_58[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38 = (long *)*puVar4;
          FUN_02a44274(lVar8 + 0xd8,&local_38);
          return;
        }
      }
    }
  }
  return;
}


