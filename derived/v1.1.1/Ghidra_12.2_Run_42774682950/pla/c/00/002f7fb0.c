/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f7fb0; name: FUN_002f7fb0
 */


undefined4 FUN_002f7fb0(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  long local_68;
  
  lVar7 = DAT_04399740;
  lVar10 = tpidr_el0;
  *(long *)(lVar10 + 0x40) = DAT_04399740;
  if (param_1 < lVar7) {
    if (param_2 == (long *)0x0) {
      uVar13 = 1;
    }
    else {
      lVar10 = *param_2;
      if (lVar7 <= *param_2) {
        lVar10 = lVar7;
      }
      *param_2 = lVar10;
      uVar13 = 1;
    }
  }
  else {
    do {
      if (DAT_04399748 != 0) {
        uVar13 = 0;
        ClearExclusiveLocal();
        goto joined_r0x002f81dc;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x4399748,0x10);
      if (bVar3) {
        DAT_04399748 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_002ef750(&DAT_04399758);
    puVar6 = PTR_DAT_043738d8;
    if (PTR_DAT_043738d8[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc",0x266,1,
                   "  .. shard[%d]->min_deadline = %ld",
                   (int)((ulong)(*DAT_04399710 - DAT_04399700) >> 3) * -0x1642c859,
                   *(undefined8 *)(*DAT_04399710 + 0x60));
    }
    if (param_1 == 0x7fffffffffffffff) {
      lVar7 = *DAT_04399710;
      uVar13 = 1;
      lVar8 = *(long *)(lVar7 + 0x60);
      while (lVar10 = 0x7fffffffffffffff, lVar8 != 0x7fffffffffffffff) {
        lVar7 = FUN_002f8400(lVar7,0x7fffffffffffffff,&local_68,param_3);
        lVar10 = local_68;
        if (lVar7 != 0) {
          uVar13 = 2;
        }
        if (puVar6[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc",0x278,1,
                       "  .. result --> %d, shard[%d]->min_deadline %ld --> %ld, now=%ld",uVar13,
                       (int)((ulong)(*DAT_04399710 - DAT_04399700) >> 3) * -0x1642c859,
                       *(undefined8 *)(*DAT_04399710 + 0x60),local_68,0x7fffffffffffffff);
        }
        plVar9 = DAT_04399710;
        lVar7 = *DAT_04399710;
        *(long *)(lVar7 + 0x60) = lVar10;
        uVar1 = *(uint *)(lVar7 + 0x68);
        while (uVar1 != 0) {
          uVar4 = uVar1 - 1;
          lVar8 = plVar9[uVar4];
          if (*(long *)(lVar8 + 0x60) <= lVar10) break;
          lVar12 = plVar9[uVar1];
          plVar9[uVar4] = lVar12;
          plVar9[uVar1] = lVar8;
          *(uint *)(lVar12 + 0x68) = uVar4;
          *(uint *)(lVar8 + 0x68) = uVar1;
          uVar1 = *(uint *)(lVar7 + 0x68);
        }
        uVar11 = DAT_04399708 - 1;
        while (uVar5 = (ulong)uVar1, uVar5 < uVar11) {
          uVar4 = uVar1 + 1;
          lVar8 = plVar9[uVar4];
          if (lVar10 <= *(long *)(lVar8 + 0x60)) break;
          lVar12 = plVar9[uVar5];
          plVar9[uVar5] = lVar8;
          plVar9[uVar4] = lVar12;
          *(uint *)(lVar8 + 0x68) = uVar1;
          *(uint *)(lVar12 + 0x68) = uVar4;
          uVar1 = *(uint *)(lVar7 + 0x68);
        }
        lVar7 = *plVar9;
        lVar8 = *(long *)(lVar7 + 0x60);
      }
    }
    else {
      uVar13 = 1;
      plVar9 = DAT_04399710;
LAB_002f8204:
      lVar7 = *plVar9;
      lVar10 = *(long *)(lVar7 + 0x60);
      if (lVar10 <= param_1) {
        lVar7 = FUN_002f8400(lVar7,param_1,&local_68,param_3);
        lVar10 = local_68;
        if (lVar7 != 0) {
          uVar13 = 2;
        }
        if (puVar6[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc",0x278,1,
                       "  .. result --> %d, shard[%d]->min_deadline %ld --> %ld, now=%ld",uVar13,
                       (int)((ulong)(*DAT_04399710 - DAT_04399700) >> 3) * -0x1642c859,
                       *(undefined8 *)(*DAT_04399710 + 0x60),local_68,param_1);
        }
        plVar9 = DAT_04399710;
        lVar7 = *DAT_04399710;
        *(long *)(lVar7 + 0x60) = lVar10;
        uVar1 = *(uint *)(lVar7 + 0x68);
        while (uVar1 != 0) {
          uVar4 = uVar1 - 1;
          lVar8 = plVar9[uVar4];
          if (*(long *)(lVar8 + 0x60) <= lVar10) break;
          lVar12 = plVar9[uVar1];
          plVar9[uVar4] = lVar12;
          plVar9[uVar1] = lVar8;
          *(uint *)(lVar12 + 0x68) = uVar4;
          *(uint *)(lVar8 + 0x68) = uVar1;
          uVar1 = *(uint *)(lVar7 + 0x68);
        }
        uVar11 = DAT_04399708 - 1;
        while (uVar5 = (ulong)uVar1, uVar5 < uVar11) {
          uVar4 = uVar1 + 1;
          lVar8 = plVar9[uVar4];
          if (lVar10 <= *(long *)(lVar8 + 0x60)) break;
          lVar12 = plVar9[uVar5];
          plVar9[uVar5] = lVar8;
          plVar9[uVar4] = lVar12;
          *(uint *)(lVar8 + 0x68) = uVar1;
          *(uint *)(lVar12 + 0x68) = uVar4;
          uVar1 = *(uint *)(lVar7 + 0x68);
        }
        goto LAB_002f8204;
      }
    }
    if (param_2 != (long *)0x0) {
      lVar8 = *param_2;
      if (lVar10 <= *param_2) {
        lVar8 = lVar10;
      }
      *param_2 = lVar8;
      lVar10 = *(long *)(lVar7 + 0x60);
    }
    DAT_04399740 = lVar10;
    FUN_002ef790(&DAT_04399758);
    DAT_04399748 = 0;
joined_r0x002f81dc:
    if (4 < param_3) {
      FUN_002f0430(param_3,"external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc",0x29e
                  );
    }
  }
  return uVar13;
}


