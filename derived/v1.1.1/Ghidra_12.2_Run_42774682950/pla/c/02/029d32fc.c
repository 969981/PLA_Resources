/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d32fc; name: FUN_029d32fc
 */


void FUN_029d32fc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 local_34;
  
  lVar8 = *(long *)(param_1 + 0x20);
  FUN_02a39100(*(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x18),0);
  FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x66,0);
  lVar9 = *(long *)(param_1 + 0x20);
  uVar1 = *param_3;
  lVar10 = *(long *)(*(long *)(lVar9 + 0x20) + 0x18);
  lVar8 = (*(code *)PTR_FUN_0427cde8)(&local_34,uVar1);
  if (lVar8 != 0) {
    FUN_029651bc(*(undefined8 *)(*(long *)(lVar10 + 8) + 0x88),3,0,4,0,uVar1,lVar8,local_34,
                 (short)*(undefined4 *)(lVar10 + 0x78));
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x65,0,uVar1);
  lVar8 = *(long *)(param_1 + 0x20);
  bVar2 = param_3[1];
  bVar3 = param_3[2];
  uVar1 = param_3[3];
  puVar7 = *(undefined1 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0x10) + 0x28);
  *puVar7 = *param_3;
  *(uint *)(puVar7 + 4) = (uint)bVar2;
  *(uint *)(puVar7 + 8) = (uint)bVar3;
  *(undefined4 *)(puVar7 + 0xc) = 0;
  puVar7[0x10] = uVar1;
  FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x6a);
  FUN_02993478(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x220) + 0x38),*param_3);
  lVar8 = *(long *)(param_1 + 0x10);
  uVar1 = param_3[3];
  uVar4 = *param_3;
  lVar9 = *(long *)(param_1 + 0x20);
  uVar6 = FUN_029cddec(*(undefined8 *)(param_1 + 8),lVar8);
  if (((uVar6 & 1) == 0) &&
     (uVar5 = FUN_02957720(*(undefined8 *)(lVar8 + 0x188),0xb,uVar1,0,uVar4), -1 < (int)uVar5)) {
    uVar5 = uVar5 & 0xff;
    if (uVar5 < 10) {
      *(undefined1 *)
       (*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0x10) + 0x188) + (ulong)uVar5 + 0x10) = 1;
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x6d,(ulong)uVar5,0xb);
  }
  return;
}


