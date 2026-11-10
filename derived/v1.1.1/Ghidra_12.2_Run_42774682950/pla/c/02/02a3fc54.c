/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3fc54; name: FUN_02a3fc54
 */


void FUN_02a3fc54(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  char cVar8;
  uint uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  param_1[1] = param_2;
  uVar9 = param_2;
  while( true ) {
    uVar5 = *(undefined1 *)((long)param_1 + (ulong)uVar9 + 8);
    uVar6 = *(undefined1 *)((long)param_1 + (ulong)(uVar9 + 1) + 8);
    uVar1 = uVar9 + 2;
    param_1[1] = uVar1;
    uVar2 = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = (ulong)uVar2;
    if ((uVar2 != 0xae) && (uVar2 != 0xab)) break;
    uVar9 = uVar9 + *(byte *)((long)param_1 + (ulong)uVar1 + 8) + 3;
    param_1[1] = uVar9;
    if (uVar3 <= uVar9) {
      uVar7 = 0xaa;
      *param_1 = param_2;
LAB_02a3fd0c:
      local_40 = 0;
      uStack_38 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_02a3e7b8(param_1,uVar7,(&DAT_03a80f80)[uVar7],&local_70);
      cVar8 = (char)*param_1 - (char)param_2;
LAB_02a3fd3c:
      param_2 = param_2 & 0xffff;
      *(undefined1 *)((long)param_1 + (ulong)param_2 + 8) = 0;
      *(undefined1 *)((long)param_1 + (ulong)(param_2 + 1) + 8) = 0xae;
      *(char *)((long)param_1 + (ulong)(param_2 + 2) + 8) = cVar8 + -3;
      *param_1 = uVar3;
      param_1[1] = uVar4;
      return;
    }
  }
  param_2 = uVar9;
  if ((uVar2 | 1) != 0xad) {
    *param_1 = uVar9;
    goto LAB_02a3fd0c;
  }
  *param_1 = uVar9;
  param_1[1] = uVar9 + 3;
  cVar8 = *(char *)((long)param_1 + (ulong)uVar1 + 8);
  if (cVar8 == '\0') goto LAB_02a3fd0c;
  cVar8 = cVar8 + '\x03';
  goto LAB_02a3fd3c;
}


