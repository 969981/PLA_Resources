/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef0df0; name: FUN_02ef0df0
 */


void FUN_02ef0df0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong *__src;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong local_40;
  ulong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = 0;
  if (((*(uint *)(*(long *)(param_1 + 8) + 0x40) < 2) ||
      (lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 8), lVar2 == 0)) &&
     (lVar2 = DAT_0440a410, DAT_0440a410 == 0)) {
    FUN_02e43d1c();
    lVar2 = DAT_0440a410;
  }
  local_38 = (ulong *)0x0;
  local_30 = 0;
  uVar5 = *(uint *)(lVar2 + 0xb0);
  uVar3 = (ulong)uVar5;
  if (uVar5 == 0) {
    local_30 = 0;
LAB_02ef0ebc:
    uVar5 = 0;
  }
  else {
    if (uVar5 == 1) {
      local_38 = &local_40;
LAB_02ef0e54:
      local_30 = CONCAT44(uVar5,uVar5);
      *local_38 = **(ulong **)(lVar2 + 0xa8);
      if ((1 < *(uint *)(lVar2 + 0xb0)) &&
         (local_38[1] = *(ulong *)(*(long *)(lVar2 + 0xa8) + 8), 2 < *(uint *)(lVar2 + 0xb0))) {
        uVar3 = 2;
        do {
          uVar10 = uVar3 + 1;
          local_38[uVar3] = *(ulong *)(*(long *)(lVar2 + 0xa8) + uVar3 * 8);
          uVar3 = uVar10;
        } while (uVar10 < *(uint *)(lVar2 + 0xb0));
      }
LAB_02ef0eb0:
      uVar3 = local_30 & 0xffffffff;
      if ((int)local_30 == 0) goto LAB_02ef0ebc;
    }
    else {
      puVar8 = (ulong *)FUN_02f59e40(4,uVar3 << 3,8);
      if (puVar8 == (ulong *)0x0) goto LAB_02ef0eb0;
      local_30 = CONCAT44(uVar5,uVar5);
      local_38 = puVar8;
      if (*(int *)(lVar2 + 0xb0) != 0) goto LAB_02ef0e54;
    }
    __src = local_38;
    puVar8 = *(ulong **)(param_3 + 8);
    puVar6 = local_38;
    puVar7 = local_38;
    puVar9 = puVar8;
    while( true ) {
      if ((puVar8 == puVar9 + *(uint *)(param_3 + 0x10)) || (uVar10 = *puVar8, *puVar6 < uVar10)) {
        if (puVar6 != puVar7) {
          *puVar7 = *puVar6;
          uVar3 = local_30 & 0xffffffff;
        }
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
      }
      else {
        puVar8 = puVar8 + 1;
        if (*puVar6 == uVar10) {
          puVar6 = puVar6 + 1;
        }
      }
      if (local_38 + uVar3 == puVar6) break;
      puVar9 = *(ulong **)(param_3 + 8);
    }
    uVar4 = (uint)uVar3;
    uVar5 = (uint)((ulong)((long)puVar7 - (long)local_38) >> 3);
    if (uVar4 <= uVar5) {
      if (local_30._4_4_ < uVar5) {
        uVar1 = local_30._4_4_ + (uVar5 - uVar4);
        if (uVar1 < 2) {
          puVar8 = &local_40;
          if (local_38 != (ulong *)0x0) goto LAB_02ef0fa0;
LAB_02ef0fac:
          if (puVar8 == (ulong *)0x0) goto LAB_02ef0ec4;
        }
        else {
          puVar8 = (ulong *)FUN_02f59e40(4,(ulong)uVar1 << 3,8);
          if (__src == (ulong *)0x0) goto LAB_02ef0fac;
LAB_02ef0fa0:
          if ((puVar8 == __src) || (puVar8 == (ulong *)0x0)) goto LAB_02ef0fac;
          memcpy(puVar8,__src,(ulong)(uVar4 << 3));
          if (&local_40 != __src) {
            (*DAT_0442d158)(4,__src,&local_40,lVar2);
          }
        }
        local_30 = (ulong)uVar1 << 0x20;
        local_38 = puVar8;
      }
    }
  }
  local_30 = CONCAT44(local_30._4_4_,uVar5);
LAB_02ef0ec4:
  FUN_02ef013c(param_1,param_2,&local_40,lVar2,&local_28,&local_18);
  if ((local_38 != (ulong *)0x0) &&
     (local_30 = local_30 & 0xffffffff00000000, &local_40 != local_38)) {
    (*DAT_0442d158)(4);
  }
  return;
}


