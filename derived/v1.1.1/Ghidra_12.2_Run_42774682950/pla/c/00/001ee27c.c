/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ee27c; name: FUN_001ee27c
 */


undefined8 FUN_001ee27c(long param_1,long param_2,size_t param_3)

{
  undefined8 uVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(long *)(param_2 + 0x60) + param_3;
  if (uVar4 < 0x19001) {
    uVar3 = *(ulong *)(param_1 + 0x1128);
    if (uVar4 < uVar3) {
      __dest = *(void **)(param_2 + 0x58);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x1120);
      lVar6 = *(long *)(param_2 + 0x58);
      uVar4 = uVar4 * 3 >> 1;
      if (uVar4 <= uVar3 * 2) {
        uVar4 = uVar3 << 1;
      }
      lVar2 = FUN_002044e4(lVar5,uVar4);
      if (lVar2 == 0) {
        FUN_001f3ae0(param_1,"Failed to alloc memory for big header!");
        goto LAB_001ee2c0;
      }
      *(long *)(param_1 + 0x1120) = lVar2;
      __dest = (void *)(lVar2 + (lVar6 - lVar5));
      *(ulong *)(param_1 + 0x1128) = uVar4;
      *(void **)(param_2 + 0x58) = __dest;
    }
    memcpy(__dest,*(void **)(param_2 + 0x70),param_3);
    lVar5 = *(long *)(param_2 + 0x58);
    uVar1 = 0;
    *(size_t *)(param_2 + 0x58) = lVar5 + param_3;
    *(size_t *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + param_3;
    *(undefined1 *)(lVar5 + param_3) = 0;
  }
  else {
    FUN_001f3ae0(param_1,"Rejected %zu bytes header (max is %d)!",uVar4,0x19000);
LAB_001ee2c0:
    uVar1 = 0x1b;
  }
  return uVar1;
}


