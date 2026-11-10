/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a4134; name: FUN_010a4134
 */


void FUN_010a4134(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_378 [4];
  long *local_358;
  long *local_348 [4];
  long *local_328;
  long *local_318 [4];
  long *local_2f8;
  long *local_2e8 [4];
  long *local_2c8;
  long *local_2b8 [4];
  long *local_298;
  long *local_288 [4];
  long *local_268;
  long *local_258 [4];
  long *local_238;
  long *local_228 [4];
  long *local_208;
  long *local_1f8 [4];
  long *local_1d8;
  long *local_1c8 [4];
  long *local_1a8;
  long *local_198 [4];
  long *local_178;
  long *local_168 [4];
  long *local_148;
  long *local_138 [4];
  long *local_118;
  long *local_108 [4];
  long *local_e8;
  long *local_d8 [4];
  long *local_b8;
  long *local_a8 [4];
  long *local_88;
  long *local_78 [4];
  long *local_58;
  char *local_48;
  
  local_378[0] = (long *)0x397e103;
  FUN_009f1b84(local_348,local_378);
  local_378[0] = (long *)0x393a5d7;
  FUN_009f1b84(local_318,local_378);
  local_378[0] = (long *)0x39a3c36;
  FUN_009f1b84(local_2e8,local_378);
  local_378[0] = (long *)0x39abe6b;
  FUN_009f1b84(local_2b8,local_378);
  local_378[0] = (long *)0x38cb9f0;
  FUN_009f1b84(local_288,local_378);
  local_378[0] = (long *)0x396afff;
  FUN_009f1b84(local_258,local_378);
  local_378[0] = (long *)0x3928609;
  FUN_009f1b84(local_228,local_378);
  local_378[0] = (long *)0x38d40a9;
  FUN_009f1b84(local_1f8,local_378);
  local_378[0] = (long *)0x39b4aa9;
  FUN_009f1b84(local_1c8,local_378);
  local_378[0] = (long *)0x38cba18;
  FUN_009f1b84(local_198,local_378);
  local_378[0] = (long *)0x38cba53;
  FUN_009f1b84(local_168,local_378);
  local_378[0] = (long *)0x3913472;
  FUN_009f1b84(local_138,local_378);
  local_378[0] = (long *)0x392862d;
  FUN_009f1b84(local_108,local_378);
  local_378[0] = (long *)0x38e97d4;
  FUN_009f1b84(local_d8,local_378);
  local_378[0] = (long *)0x38ae44e;
  FUN_009f1b84(local_a8,local_378);
  local_378[0] = (long *)0x392866f;
  FUN_009f1b84(local_78,local_378);
  lVar9 = 0;
  do {
    uVar5 = FUN_00938764(param_1 + lVar9 * 0x30 + 0x50,1,local_348 + lVar9 * 6,0,
                         *(undefined8 *)(param_1 + 8),0);
    if (((uVar5 & 1) != 0) &&
       (plVar6 = *(long **)(param_1 + lVar9 * 0x30 + 0x78), plVar6 != (long *)0x0)) {
      lVar7 = plVar6[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_010a470c;
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar7 = plVar6[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x10);
  uVar8 = *(undefined8 *)(param_1 + 8);
  local_48 = "bin/archive/pokemon/pokeconfig.gfpak";
  FUN_009f1b84(local_378,&local_48);
  lVar9 = FUN_010b03f4(&local_48,uVar8,local_378);
  if (lVar9 != 0) {
    lVar7 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_010a470c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x4f70);
  *(undefined8 *)(param_1 + 0x4f70) = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x4f70) = lVar9;
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x20))();
  }
  if (local_378[0] != (long *)0x0) {
    (**(code **)(*local_378[0] + 0x20))();
  }
  FUN_00d09400(*(undefined8 *)(param_1 + 0x4f70));
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_78[0] != (long *)0x0) {
    (**(code **)(*local_78[0] + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_a8[0] != (long *)0x0) {
    (**(code **)(*local_a8[0] + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_d8[0] != (long *)0x0) {
    (**(code **)(*local_d8[0] + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_108[0] != (long *)0x0) {
    (**(code **)(*local_108[0] + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_138[0] != (long *)0x0) {
    (**(code **)(*local_138[0] + 0x20))();
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  if (local_168[0] != (long *)0x0) {
    (**(code **)(*local_168[0] + 0x20))();
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (local_198[0] != (long *)0x0) {
    (**(code **)(*local_198[0] + 0x20))();
  }
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  if (local_1c8[0] != (long *)0x0) {
    (**(code **)(*local_1c8[0] + 0x20))();
  }
  if (local_1d8 != (long *)0x0) {
    (**(code **)(*local_1d8 + 0x20))();
  }
  if (local_1f8[0] != (long *)0x0) {
    (**(code **)(*local_1f8[0] + 0x20))();
  }
  if (local_208 != (long *)0x0) {
    (**(code **)(*local_208 + 0x20))();
  }
  if (local_228[0] != (long *)0x0) {
    (**(code **)(*local_228[0] + 0x20))();
  }
  if (local_238 != (long *)0x0) {
    (**(code **)(*local_238 + 0x20))();
  }
  if (local_258[0] != (long *)0x0) {
    (**(code **)(*local_258[0] + 0x20))();
  }
  if (local_268 != (long *)0x0) {
    (**(code **)(*local_268 + 0x20))();
  }
  if (local_288[0] != (long *)0x0) {
    (**(code **)(*local_288[0] + 0x20))();
  }
  if (local_298 != (long *)0x0) {
    (**(code **)(*local_298 + 0x20))();
  }
  if (local_2b8[0] != (long *)0x0) {
    (**(code **)(*local_2b8[0] + 0x20))();
  }
  if (local_2c8 != (long *)0x0) {
    (**(code **)(*local_2c8 + 0x20))();
  }
  if (local_2e8[0] != (long *)0x0) {
    (**(code **)(*local_2e8[0] + 0x20))();
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (local_318[0] != (long *)0x0) {
    (**(code **)(*local_318[0] + 0x20))();
  }
  if (local_328 != (long *)0x0) {
    (**(code **)(*local_328 + 0x20))();
  }
  if (local_348[0] != (long *)0x0) {
    (**(code **)(*local_348[0] + 0x20))();
  }
  return;
}


