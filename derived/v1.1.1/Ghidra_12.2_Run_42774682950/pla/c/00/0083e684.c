/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083e684; name: FUN_0083e684
 */


void FUN_0083e684(undefined8 param_1,long param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *__dest;
  size_t __n;
  undefined1 auStack_680 [32];
  int local_660 [4];
  undefined1 auStack_650 [64];
  undefined4 local_610 [4];
  undefined1 local_600;
  byte local_5ff;
  undefined2 local_38 [4];
  
  if (0xe < param_3) {
    lVar3 = FUN_008473ec();
    if (lVar3 != 0) {
      lVar3 = FUN_008473ec(param_1);
      lVar4 = FUN_00847388(param_1);
      if (lVar3 == lVar4) {
        uVar2 = (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        FUN_0083fbc0(auStack_650);
        uVar5 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
        lVar3 = FUN_00826d78(uVar5,uVar2 >> 0x20 | uVar2 << 0x20);
        if (lVar3 != 0) {
          FUN_00825dcc(local_660,lVar3,auStack_650);
          if (local_660[0] == 0) {
            uVar5 = FUN_0083fda0(auStack_650);
            lVar3 = FUN_0083e5a8(uVar5,param_2 + 0xd,(ulong)param_3 - 0xd,lVar3);
            if (lVar3 != 0) {
              FUN_0083e2d4(param_1);
              bVar1 = *(char *)(param_2 + 0xe) + *(char *)(param_2 + 0xd);
              FUN_0083fd74(auStack_680,auStack_650);
              local_600 = 1;
              __dest = (void *)((ulong)&local_600 | 2);
              __n = (ulong)bVar1 << 3;
              local_5ff = bVar1;
              memcpy(__dest,(void *)(param_2 + 0xf),__n);
              uVar5 = FUN_00847424(param_1);
              local_610[0] = 0xa0000000;
              local_38[0] = 0;
              lVar3 = FUN_008469d8(uVar5,local_610,auStack_680,
                                   ((int)__dest + (int)__n) - (int)&local_600,local_38,
                                   0x1000000000000,0);
              if (lVar3 != 0) {
                uVar5 = FUN_00847424(param_1);
                FUN_0084695c(local_610,uVar5,&local_600);
              }
            }
          }
        }
        FUN_0083fc40(auStack_650);
      }
    }
  }
  return;
}


