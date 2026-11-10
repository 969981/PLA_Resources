/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f329d4; name: FUN_02f329d4
 */


void FUN_02f329d4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 auStack_50 [4];
  undefined8 local_38;
  
  if (((DAT_0440b088 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0440b088), iVar1 != 0)) {
    DAT_0440b080 = 0x81;
    __cxa_guard_release(&DAT_0440b088);
  }
  lVar8 = *(long *)(param_1 + 0x10);
  local_38 = 0;
  if (*(long *)(lVar8 + 0x68) != 0) {
    FUN_02ec6d50(*(long *)(lVar8 + 0x68),&DAT_0440b080,(long)&local_38 + 4,&local_38);
    uVar4 = local_38 & 0xffffffff;
    uVar3 = (ulong)local_38._4_4_;
    if (local_38._4_4_ != 0 || (int)local_38 != 0) {
      if (((*(byte *)(*(long *)(param_1 + 0x10) + 0x2a4) >> 4 & 1) == 0) ||
         (*(int *)(*(long *)(param_1 + 0x10) + 0x2f8) != -1)) {
        uVar5 = uVar3 * 8 + 0xf & 0xffffffff0;
        lVar2 = (long)auStack_50 - uVar5;
        puVar6 = (undefined4 *)(lVar2 - (uVar4 * 8 + 0xf & 0xffffffff0));
        lVar7 = (long)puVar6 - uVar5;
        if (*(long *)(lVar8 + 0x68) != 0) {
          FUN_02ec6e0c(*(long *)(lVar8 + 0x68),&DAT_0440b080,lVar2,puVar6,lVar7,(long)&local_38 + 4,
                       &local_38);
          uVar4 = local_38 & 0xffffffff;
          uVar3 = local_38 >> 0x20;
        }
      }
      else {
        if (*(long *)(lVar8 + 0x68) == 0) {
          auStack_50[2] = 0x3f800000;
        }
        else {
          auStack_50[2] = FUN_02ec6f2c(*(long *)(lVar8 + 0x68),&DAT_0440b080);
        }
        puVar6 = auStack_50 + 2;
        lVar2 = 0;
        lVar7 = 0;
        uVar3 = 0;
        uVar4 = 1;
        auStack_50[3] = auStack_50[2];
      }
      FUN_02f32ba8(param_2,lVar2,puVar6,lVar7,uVar3,uVar4);
    }
  }
  return;
}


