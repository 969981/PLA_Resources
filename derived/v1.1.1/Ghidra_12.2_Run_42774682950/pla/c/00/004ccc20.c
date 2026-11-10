/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ccc20; name: FUN_004ccc20
 */


undefined4 FUN_004ccc20(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_58;
  
  local_58 = (ulong)CONCAT11((char)param_2,(char)((ulong)param_2 >> 8)) << 0x30;
  lVar3 = FUN_004f5d40(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120),&local_58);
  if (lVar3 == 0) {
    FUN_004c99a0(param_1,0x50,0x186,0x44,"external/openssl/ssl/statem/statem_dtls.c",0x45b);
    uVar2 = 0;
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
    puVar6 = *(undefined1 **)(lVar3 + 8);
    lVar3 = 0xc;
    if (*(int *)(puVar6 + 0x28) != 0) {
      lVar3 = 1;
    }
    memcpy(*(void **)(*(long *)(param_1 + 0x88) + 8),*(void **)(puVar6 + 0x58),
           *(long *)(puVar6 + 8) + lVar3);
    lVar4 = *(long *)(puVar6 + 8);
    *(long *)(param_1 + 0x98) = lVar4 + lVar3;
    uVar1 = *(undefined2 *)(puVar6 + 0x10);
    uVar5 = *(undefined8 *)(puVar6 + 0x20);
    lVar3 = *(long *)(param_1 + 0xb0);
    *(undefined1 *)(lVar3 + 0x138) = *puVar6;
    *(long *)(lVar3 + 0x140) = lVar4;
    *(undefined2 *)(lVar3 + 0x148) = uVar1;
    *(undefined8 *)(lVar3 + 0x150) = 0;
    *(undefined8 *)(lVar3 + 0x158) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x468);
    uVar7 = *(undefined8 *)(param_1 + 0x480);
    uVar8 = *(undefined8 *)(param_1 + 0x458);
    uVar9 = *(undefined8 *)(param_1 + 0x508);
    uVar1 = *(undefined2 *)(*(long *)(param_1 + 0x17a8) + 2);
    *(undefined4 *)(lVar3 + 0x20c) = 1;
    *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(puVar6 + 0x30);
    *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(puVar6 + 0x38);
    *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(puVar6 + 0x40);
    *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(puVar6 + 0x48);
    FUN_004c83d0(param_1 + 0x7f8,*(undefined2 *)(puVar6 + 0x50));
    uVar2 = 0x16;
    if (*(int *)(puVar6 + 0x28) != 0) {
      uVar2 = 0x14;
    }
    uVar2 = FUN_004cbc40(param_1,uVar2);
    *(undefined8 *)(param_1 + 0x468) = uVar5;
    *(undefined8 *)(param_1 + 0x480) = uVar7;
    *(undefined8 *)(param_1 + 0x458) = uVar8;
    *(undefined8 *)(param_1 + 0x508) = uVar9;
    FUN_004c83d0(param_1 + 0x7f8,uVar1);
    *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x20c) = 0;
    FUN_00404920(*(undefined8 *)(param_1 + 0x18),0xb,0,0);
  }
  return uVar2;
}


