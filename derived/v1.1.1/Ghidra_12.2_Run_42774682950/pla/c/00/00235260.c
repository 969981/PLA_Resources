/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00235260; name: FUN_00235260
 */


void FUN_00235260(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined8 *)PTR_DAT_04372b98;
    pbVar4 = PTR_DAT_04372b90;
    puVar5 = (undefined8 *)PTR_DAT_04372a60;
    pbVar6 = PTR_DAT_04372a58;
    for (lVar10 = *(long *)(param_1 + 0x50); PTR_DAT_04372a58 = pbVar6,
        PTR_DAT_04372a60 = (undefined *)puVar5, PTR_DAT_04372b90 = pbVar4,
        PTR_DAT_04372b98 = (undefined *)puVar3, lVar10 != param_1 + 0x48;
        lVar10 = *(long *)(lVar10 + 8)) {
      FUN_00235260(*(undefined8 *)(lVar10 + 0x10),param_2);
      puVar3 = (undefined8 *)PTR_DAT_04372b98;
      pbVar4 = PTR_DAT_04372b90;
      puVar5 = (undefined8 *)PTR_DAT_04372a60;
      pbVar6 = PTR_DAT_04372a58;
    }
    puVar9 = *(uint **)(param_1 + 0x58);
    if ((puVar9 != (uint *)0x0) && (uVar1 = *puVar9, 0 < (int)uVar1)) {
      uVar12 = 0;
      uVar2 = puVar9[1];
      do {
        plVar11 = *(long **)(*(long *)(puVar9 + 2) + (uVar12 + (long)(int)uVar2) * 8);
        if (((*pbVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar4), iVar7 != 0)) {
          if (((*pbVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar6), iVar7 != 0)) {
            *puVar5 = 0;
            __cxa_guard_release(pbVar6);
            *puVar3 = puVar5;
            __cxa_guard_release(pbVar4);
          }
          else {
            *puVar3 = puVar5;
            __cxa_guard_release(pbVar4);
          }
        }
        if (plVar11 != (long *)0x0) {
          for (puVar8 = (undefined8 *)(**(code **)*plVar11)(plVar11); puVar8 != (undefined8 *)0x0;
              puVar8 = (undefined8 *)*puVar8) {
            if (puVar8 == puVar3) {
              lVar10 = (**(code **)(*plVar11 + 0x30))(plVar11);
              if ((lVar10 != 0) && (lVar10 = FUN_00244240(), lVar10 != 0)) {
                FUN_0024882c((int)plVar11[5],lVar10,param_2,param_1);
              }
              break;
            }
          }
        }
        uVar12 = uVar12 + 1;
        if (uVar12 == uVar1) {
          return;
        }
        puVar9 = *(uint **)(param_1 + 0x58);
      } while( true );
    }
  }
  return;
}


