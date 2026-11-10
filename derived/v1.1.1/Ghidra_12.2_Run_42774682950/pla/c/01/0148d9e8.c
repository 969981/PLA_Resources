/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148d9e8; name: FUN_0148d9e8
 */


void FUN_0148d9e8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined6 local_40;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  
  local_78[0] = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0;
  local_40 = 0;
  uStack_3a = 0;
  uStack_38 = 0;
  local_60 = &DAT_cbf29ce484222645;
  uStack_58 = 0;
  local_51 = 0;
  uStack_50 = 0;
  uVar5 = *(ulong *)(param_1 + 0x2938);
  if (999 < uVar5) {
    FUN_0148d838(param_1 + 0x28f0);
    uVar5 = *(ulong *)(param_1 + 0x2938);
  }
  lVar3 = *(long *)(param_1 + 0x28f8);
  lVar2 = *(long *)(param_1 + 0x2900) - lVar3;
  uVar5 = *(long *)(param_1 + 0x2930) + uVar5;
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = (lVar2 >> 3) * 0x38 - 1;
  }
  if (uVar1 == uVar5) {
    FUN_01494c08(param_1 + 0x28f0);
    uVar5 = *(long *)(param_1 + 0x2930) + *(long *)(param_1 + 0x2938);
    lVar3 = *(long *)(param_1 + 0x28f8);
    if (*(long *)(param_1 + 0x2900) == lVar3) goto LAB_0148db4c;
  }
  else if (*(long *)(param_1 + 0x2900) == lVar3) {
LAB_0148db4c:
    lVar2 = 0;
    goto LAB_0148dab4;
  }
  lVar2 = *(long *)(lVar3 + (uVar5 / 0x38) * 8) + (uVar5 % 0x38) * 0x48;
LAB_0148dab4:
  FUN_01495a54(param_1 + 0x2940,lVar2,local_78);
  lVar2 = *(long *)(param_1 + 0x2938);
  *(long *)(param_1 + 0x2938) = lVar2 + 1;
  uVar5 = *(long *)(param_1 + 0x2930) + lVar2;
  puVar4 = (undefined1 *)
           (*(long *)(*(long *)(param_1 + 0x28f8) + (uVar5 / 0x38) * 8) + (uVar5 % 0x38) * 0x48);
  *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *puVar4 = 1;
  return;
}


