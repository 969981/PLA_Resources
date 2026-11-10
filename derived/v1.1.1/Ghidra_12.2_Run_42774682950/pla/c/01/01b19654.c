/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b19654; name: FUN_01b19654
 */


void FUN_01b19654(long *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined1 local_50 [16];
  long *local_38;
  long *local_28;
  
  puVar2 = (undefined8 *)*param_1;
  fVar9 = *(float *)(param_1[1] + 0x14);
  plVar3 = (long *)param_1[3];
  fVar10 = *(float *)(*(long *)param_1[2] + 0x200);
  puVar2[1] = puVar2[1];
  *puVar2 = CONCAT44(fVar9 - (fVar10 + -1e-05),(int)*puVar2);
  local_50._0_8_ = (undefined8 *)0x0;
  local_50._8_8_ = 0;
  FUN_00ac4814(local_50,plVar3 + 0xc5);
  if ((undefined8 *)local_50._0_8_ == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_009b8474(&local_38);
    uVar6 = local_50._0_8_;
    if ((undefined8 *)local_50._0_8_ != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50._0_8_ + 8);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(local_50._0_8_ + 0x10) = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = *(long **)uVar6;
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
  }
  if (local_38 == (long *)0x0) {
    lVar8 = *param_1;
    FUN_009c69bc(&local_28,plVar3);
    local_50._8_8_ = local_28[0x19];
    local_50._0_8_ = local_28[0x18];
    FUN_01a83770(plVar3,lVar8,local_50);
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  else {
    local_50 = FUN_01827df4(0x3d088889,local_38,param_1[4]);
    FUN_01a83770(plVar3,*param_1,local_50);
  }
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  (**(code **)(*plVar3 + 0x100))(plVar3,PTR_DAT_0437a330);
  return;
}


