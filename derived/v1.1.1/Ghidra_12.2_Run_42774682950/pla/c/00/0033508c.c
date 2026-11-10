/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033508c; name: FUN_0033508c
 */


void FUN_0033508c(long *param_1,ulong param_2)

{
  ushort uVar1;
  uint uVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  long lVar4;
  long lVar5;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 1);
  if (uVar3 < 0x101 && uVar3 < param_2) {
    do {
      uVar2 = (int)uVar3 << 2;
      if ((uVar3 & 0xffff) == 0) {
        uVar2 = 1;
      }
      uVar3 = (ulong)uVar2;
    } while ((uVar3 & 0xffff) < param_2);
    *(short *)(param_1 + 1) = (short)uVar2;
    if (0x100 < (uVar2 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!is_large()",
                    "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/extension_set.h"
                    ,0x332,"flat_begin");
    }
    __src = (void *)param_1[2];
    lVar4 = (uVar3 & 0xffff) << 5;
    uVar1 = *(ushort *)((long)param_1 + 10);
    lVar5 = *param_1;
    if (lVar5 == 0) {
      __dest = (void *)FUN_002ee6f0(lVar4);
      param_1[2] = (long)__dest;
    }
    else {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_0032cf88(lVar5,0,lVar4);
      }
      __dest = (void *)FUN_0032cea0(lVar5,lVar4);
      param_1[2] = (long)__dest;
    }
    if (uVar1 != 0) {
      memmove(__dest,__src,(ulong)uVar1 << 5);
    }
    if ((__src != (void *)0x0) && (*param_1 == 0)) {
      FUN_002e2f10(__src);
      FUN_002e2ef0(PTR_LAB_04373088,__src);
      return;
    }
  }
  return;
}


