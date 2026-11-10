/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060d7f4; name: FUN_0060d7f4
 */


void FUN_0060d7f4(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  void *__src;
  size_t __n;
  undefined1 auVar5 [16];
  uint local_5c;
  uint uStack_58;
  uint local_54;
  undefined *local_50;
  int local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  
  puVar2 = PTR_DAT_04375300;
  if (*(long *)(param_2 + 0x58) != 0) {
    lVar4 = FUN_0060a078(param_2 + 0x10);
    local_50 = puVar2 + 0x10;
    local_48 = *(int *)(lVar4 + 8);
    uStack_3c = *(undefined8 *)(lVar4 + 0x14);
    local_44 = *(undefined8 *)(lVar4 + 0xc);
    if (local_48 == 0x1c) {
                    /* try { // try from 0060d87c to 0060d883 has its CatchHandler @ 0060d940 */
      auVar5 = FUN_00607584(&local_50);
      lVar4 = *(long *)(param_2 + 0x58);
      bVar1 = *(byte *)(lVar4 + 0x10);
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0xc) {
LAB_0060d8d8:
          if ((bVar1 & 1) == 0) {
            __src = (void *)(lVar4 + 0x11);
            __n = (size_t)(bVar1 >> 1);
          }
          else {
            __n = *(size_t *)(lVar4 + 0x18);
            __src = *(void **)(lVar4 + 0x20);
          }
          memcpy(&local_5c,__src,__n);
          *param_1 = (long)(puVar2 + 0x10);
          *(undefined4 *)(param_1 + 1) = 0x1c;
          *(ulong *)((long)param_1 + 0xc) =
               (auVar5._0_8_ & 0xffffffff | (ulong)(local_5c ^ auVar5._4_4_) << 0x20) ^ 0x42a41221;
          *(ulong *)((long)param_1 + 0x14) =
               CONCAT44(local_54 ^ auVar5._12_4_,uStack_58 ^ auVar5._8_4_);
          return;
        }
      }
      else if (*(long *)(lVar4 + 0x18) == 0xc) goto LAB_0060d8d8;
    }
    else if (local_48 == 2) {
                    /* try { // try from 0060d84c to 0060d853 has its CatchHandler @ 0060d944 */
      uVar3 = FUN_00607594(&local_50);
      *param_1 = (long)(puVar2 + 0x10);
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)(param_1 + 1) = 2;
      *(uint *)((long)param_1 + 0xc) = uVar3 ^ 0x42a41221;
      return;
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}


