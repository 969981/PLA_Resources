/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c0da8; name: FUN_010c0da8
 */


float FUN_010c0da8(float param_1,long param_2,ushort *param_3,long *param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  
  puVar5 = PTR_DAT_0437b238;
  puVar4 = PTR_DAT_0437b230;
  puVar3 = PTR_DAT_0437b228;
  puVar2 = PTR_DAT_0437b188;
  uVar1 = *param_3;
  if (uVar1 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    pbVar10 = PTR_DAT_0437b180;
    plVar11 = (long *)PTR_DAT_0437b190;
    do {
      uVar8 = (uint)uVar1;
      if (uVar8 == 0x1b) {
        if ((*puVar3 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(puVar3);
          pbVar10 = PTR_DAT_0437b180;
          plVar11 = (long *)PTR_DAT_0437b190;
          if (iVar6 != 0) {
            FUN_00100250(PTR_LAB_0437b240,puVar4,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar3);
            pbVar10 = PTR_DAT_0437b180;
            plVar11 = (long *)PTR_DAT_0437b190;
          }
        }
        lVar13 = *(long *)puVar4;
        *(long *)puVar5 = lVar13;
        iVar6 = *(int *)(param_2 + 0x24);
        if ((*pbVar10 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(pbVar10);
          pbVar10 = PTR_DAT_0437b180;
          plVar11 = (long *)PTR_DAT_0437b190;
          if (iVar7 != 0) {
            FUN_00100250(PTR_LAB_0437b248,puVar2,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437b180);
            pbVar10 = PTR_DAT_0437b180;
            plVar11 = (long *)PTR_DAT_0437b190;
          }
        }
        lVar9 = *(long *)puVar2;
        *plVar11 = lVar9;
        uVar8 = *(byte *)(lVar9 + 0x50) - 1;
        if (uVar8 < 10) {
          lVar9 = *(long *)(&DAT_03a78b98 + (long)(char)uVar8 * 8);
        }
        else {
          lVar9 = 1;
        }
        lVar13 = lVar13 + lVar9 * 0x28 + (long)iVar6 * 8;
LAB_010c0e3c:
        param_4 = (long *)(*(long *)(lVar13 + 0xd8) + 0x68);
        lVar13 = 1;
      }
      else {
        if (uVar8 - 0x11 < 10) {
          if ((*puVar3 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar3);
            pbVar10 = PTR_DAT_0437b180;
            plVar11 = (long *)PTR_DAT_0437b190;
            if (iVar6 != 0) {
              FUN_00100250(PTR_LAB_0437b240,puVar4,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar3);
              pbVar10 = PTR_DAT_0437b180;
              plVar11 = (long *)PTR_DAT_0437b190;
            }
          }
          lVar13 = *(long *)puVar4;
          *(long *)puVar5 = lVar13;
          if (*param_3 - 0x13 < 8) {
            lVar9 = *(long *)(&DAT_03a78be8 + (long)(short)(*param_3 - 0x13) * 8);
          }
          else {
            lVar9 = 0;
          }
          lVar13 = lVar13 + lVar9 * 0x28 + (long)*(int *)(param_2 + 0x24) * 8;
          goto LAB_010c0e3c;
        }
        if (uVar8 == 0x10) {
          if (param_3[2] == 0xbd09) break;
          lVar13 = (ulong)param_3[1] + 2;
        }
        else {
          iVar6 = (**(code **)(*param_4 + 0x80))(param_4);
          iVar12 = iVar6 + iVar12;
          lVar13 = 1;
        }
        pbVar10 = PTR_DAT_0437b180;
        plVar11 = (long *)PTR_DAT_0437b190;
      }
      param_3 = param_3 + lVar13;
      uVar1 = *param_3;
    } while (uVar1 != 0);
  }
  iVar6 = (**(code **)(*param_4 + 0x20))(param_4);
  return (param_1 / (float)iVar6) * (float)iVar12;
}


