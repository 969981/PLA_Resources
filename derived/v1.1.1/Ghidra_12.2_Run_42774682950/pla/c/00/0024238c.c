/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024238c; name: FUN_0024238c
 */


void FUN_0024238c(long param_1,long param_2)

{
  long lVar1;
  int *__src;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 local_78 [6];
  
  lVar7 = *(long *)(param_2 + 200);
  if (lVar7 != 0) {
    uVar4 = (ulong)*(uint *)(lVar7 + 0x10);
    uVar5 = (ulong)*(ushort *)(lVar7 + 0xc + uVar4 + 2);
    if (uVar5 != 0) {
      lVar8 = lVar7 + 0x10;
      do {
        uVar5 = uVar5 - 1;
        __src = (int *)(lVar7 + 0xc + (ulong)(uint)(*(int *)(lVar8 + uVar4) + (int)uVar4));
        if (*__src == 6) {
          if (*(uint *)(param_1 + 0x60) == 0) {
LAB_00242460:
            local_78[0] = 0x15;
            *(undefined8 *)((long)((ulong)local_78 | 4) + 5) = 0xffffffffffffffff;
            *(undefined8 *)((ulong)local_78 | 4) = 0xffffffffffffffff;
            FUN_0024388c(param_1,0x15,local_78,0x14,1);
          }
          else {
            lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
            uVar3 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
            piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4) + uVar3));
            if ((*piVar2 == 0x15) && (lVar6 = (long)*(char *)((long)piVar2 + 10), -1 < lVar6)) {
              memcpy((void *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4 + lVar6 * 4) + uVar3
                                             )),__src,0xfc);
              goto joined_r0x0024249c;
            }
            if ((*(uint *)(param_1 + 0x60) >> 0x15 & 1) == 0) goto LAB_00242460;
          }
          FUN_0024388c(param_1,6,__src,0xfc,0);
        }
joined_r0x0024249c:
        if (uVar5 == 0) {
          return;
        }
        uVar4 = (ulong)*(uint *)(lVar7 + 0x10);
        lVar8 = lVar8 + 4;
      } while( true );
    }
  }
  return;
}


