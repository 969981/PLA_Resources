/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3fae8; name: FUN_02a3fae8
 */


void FUN_02a3fae8(uint *param_1,ushort param_2,ulong param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 local_90 [8];
  undefined4 *puVar8;
  int local_38;
  
  if (0xa9 < ((uint)param_3 & 0xffff)) {
    return;
  }
  bVar2 = (&DAT_03a80f80)[param_3 & 0xffff];
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  if ((bVar2 == 0x20) || (bVar2 == 0x10)) {
    uVar4 = 9;
  }
  else {
    uVar4 = (ulong)bVar2 & 0xf;
    if ((int)uVar4 == 0) {
LAB_02a3fc00:
      if (param_2 == 0xffff) {
        return;
      }
      if (((uint)param_3 & 0xffff) < 0xaa) {
        uVar3 = *param_1;
        *param_1 = (uint)param_2;
        param_1[1] = (uint)(ushort)param_1[1];
        FUN_02a3e7b8(param_1,param_3 & 0xffffffff,(ulong)bVar2,local_90);
        *param_1 = (uint)(ushort)uVar3;
        return;
      }
      return;
    }
  }
  local_38 = -0x28;
  puVar6 = local_90;
  puVar8 = (undefined4 *)register0x00000008;
  do {
    iVar1 = local_38 + 8;
    puVar7 = puVar8;
    if (0 < iVar1) goto LAB_02a3fbc0;
    puVar7 = (undefined4 *)((long)local_90 + (long)local_38);
    puVar5 = puVar6;
    while( true ) {
      uVar4 = uVar4 - 1;
      puVar6 = (undefined8 *)((long)puVar5 + 4);
      *(undefined4 *)puVar5 = *puVar7;
      if (uVar4 == 0) goto LAB_02a3fc00;
      local_38 = iVar1;
      if (iVar1 < 0) break;
      puVar7 = puVar8;
LAB_02a3fbc0:
      puVar8 = puVar7 + 2;
      puVar5 = puVar6;
    }
  } while( true );
}


