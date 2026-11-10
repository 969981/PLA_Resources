/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ff6f0; name: FUN_003ff6f0
 */


undefined8 FUN_003ff6f0(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  piVar1 = (int *)(param_2 + 0x1d8);
  do {
    iVar6 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar6 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("refcount error","external/openssl/ssl/ssl_sess.c",0x339);
  }
  FUN_00400140(*(undefined8 *)(param_1 + 0x378));
  lVar7 = FUN_00405810(*(undefined8 *)(param_1 + 0x28),param_2);
  if ((lVar7 == 0) || (lVar7 == param_2)) {
    if (((lVar7 != 0) ||
        (lVar8 = FUN_00405c90(*(undefined8 *)(param_1 + 0x28),param_2), lVar7 = param_2, lVar8 == 0)
        ) && (lVar7 != 0)) {
      FUN_003fef10();
      uVar12 = 0;
      goto LAB_003ff928;
    }
  }
  else {
    puVar10 = *(undefined8 **)(lVar7 + 0x220);
    if ((puVar10 != (undefined8 *)0x0) &&
       (puVar11 = *(undefined8 **)(lVar7 + 0x218), puVar11 != (undefined8 *)0x0)) {
      puVar2 = (undefined8 *)(param_1 + 0x40);
      puVar3 = (undefined8 *)(param_1 + 0x38);
      if (puVar10 == puVar2) {
        if (puVar11 == puVar3) {
          *puVar3 = 0;
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
        else {
          *puVar2 = puVar11;
          puVar11[0x44] = puVar2;
        }
      }
      else if (puVar11 == puVar3) {
        *puVar3 = puVar10;
        puVar10[0x43] = puVar3;
      }
      else {
        puVar10[0x43] = puVar11;
        *(undefined8 **)(*(long *)(lVar7 + 0x218) + 0x220) = puVar10;
      }
      *(long *)(lVar7 + 0x218) = 0;
      *(undefined8 *)(lVar7 + 0x220) = 0;
    }
    FUN_003fef10();
  }
  puVar10 = *(undefined8 **)(param_2 + 0x220);
  if ((puVar10 != (undefined8 *)0x0) &&
     (puVar11 = *(undefined8 **)(param_2 + 0x218), puVar11 != (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)(param_1 + 0x40);
    puVar3 = (undefined8 *)(param_1 + 0x38);
    if (puVar10 == puVar2) {
      if (puVar11 == puVar3) {
        *puVar3 = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      else {
        *puVar2 = puVar11;
        puVar11[0x44] = puVar2;
      }
    }
    else if (puVar11 == puVar3) {
      *puVar3 = puVar10;
      puVar10[0x43] = puVar3;
    }
    else {
      puVar10[0x43] = puVar11;
      *(undefined8 **)(*(long *)(param_2 + 0x218) + 0x220) = puVar10;
    }
    *(long *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
  }
  plVar9 = (long *)(param_1 + 0x38);
  lVar7 = *plVar9;
  if (lVar7 == 0) {
    *(long *)(param_1 + 0x40) = param_2;
    *(long *)(param_1 + 0x38) = param_2;
    *(long **)(param_2 + 0x218) = plVar9;
    *(long **)(param_2 + 0x220) = (long *)(param_1 + 0x40);
  }
  else {
    *(long *)(param_2 + 0x220) = lVar7;
    *(long *)(lVar7 + 0x218) = param_2;
    *(long **)(param_2 + 0x218) = plVar9;
    *plVar9 = param_2;
  }
  lVar7 = FUN_004c3c10(param_1,0x2b,0,0);
  if (0 < lVar7) {
    lVar7 = FUN_004c3c10(param_1,0x14,0,0);
    lVar8 = FUN_004c3c10(param_1,0x2b,0,0);
    if (lVar8 < lVar7) {
      piVar1 = (int *)(param_1 + 0x90);
      do {
        iVar6 = FUN_003ffc60(param_1,*(undefined8 *)(param_1 + 0x40),0);
        if (iVar6 == 0) break;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar7 = FUN_004c3c10(param_1,0x14,0,0);
        lVar8 = FUN_004c3c10(param_1,0x2b,0,0);
      } while (lVar8 < lVar7);
    }
  }
  uVar12 = 1;
LAB_003ff928:
  FUN_00400160(*(undefined8 *)(param_1 + 0x378));
  return uVar12;
}


