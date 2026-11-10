/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3bbe4; name: FUN_01c3bbe4
 */


void FUN_01c3bbe4(undefined8 *param_1,long param_2,int param_3,undefined8 param_4,ulong *param_5)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  byte *pbVar13;
  long *plVar14;
  int iVar15;
  undefined8 *puVar16;
  
  puVar8 = PTR_DAT_04381eb0;
  puVar7 = PTR_DAT_04381ea8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (param_3 == 0xf) {
    FUN_01c3be74(param_2,param_4);
    return;
  }
  if (param_3 == 0x23) {
    *param_1 = 0x209cd0e5f0e5a5b5;
    param_1[1] = &DAT_0395cb82;
    param_1[2] = 4;
  }
  else {
    lVar12 = *(long *)(param_2 + 0x228);
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar15 = *(int *)(lVar12 + 0xc);
      do {
        puVar16 = *(undefined8 **)(lVar12 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar10;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (puVar16 == (undefined8 *)0x0) goto LAB_01c3bc4c;
          if (puVar16 == (undefined8 *)puVar8) break;
          puVar16 = (undefined8 *)*puVar16;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar15) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x18);
            if (lVar12 != 0) {
              plVar14 = (long *)(lVar12 + -0x50);
              puVar11 = &DAT_cbf29ce484222645;
              pbVar13 = (byte *)(*param_5 & 0xfffffffffffffffe);
              if (pbVar13 != (byte *)0x0) {
                bVar2 = *pbVar13;
                puVar11 = &DAT_cbf29ce484222645;
                if (bVar2 != 0) {
                  puVar11 = &DAT_cbf29ce484222645;
                  do {
                    pbVar13 = pbVar13 + 1;
                    puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
                    bVar2 = *pbVar13;
                  } while (bVar2 != 0);
                }
              }
              FUN_018c663c(param_1,plVar14,puVar11,&DAT_cbf29ce484222645);
              lVar12 = *(long *)(lVar12 + 8);
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar15 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar15 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar15 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01c3be24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar14 + 0x20))(plVar14);
                return;
              }
              return;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar15 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01c3bc4c:
    param_1[2] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03996322;
  }
  param_1[3] = 0;
  return;
}


