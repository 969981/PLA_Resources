/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e50b3c; name: FUN_02e50b3c
 */


void FUN_02e50b3c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  void *__dest;
  long lVar1;
  undefined8 *__src;
  long *plVar2;
  float fVar3;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  
  if ((*(int *)(param_3 + 0x54) == *(int *)(param_1 + 0x70)) &&
     (*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 8) + 0x38) + 0x28) + 0xa8) !=
      *(long *)(param_1 + 0x40))) {
    lVar1 = *(long *)(**(long **)(*(long *)(param_2 + 8) + 0x38) + 0x20);
    local_70 = *(float *)(lVar1 + 0x18);
    local_6c = *(float *)(lVar1 + 0x1c);
    local_68 = *(float *)(lVar1 + 0x20);
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar2 = *(long **)(param_1 + 0x28);
      do {
        lVar1 = *plVar2;
        if ((((*(char *)(lVar1 + 0x690) != '\0') &&
             (*(int *)(param_3 + 0x54) == *(int *)(lVar1 + 0xa8))) && (*(int *)(lVar1 + 0x80) != 0))
           && (FUN_02e54328(&local_80,lVar1,&local_70), *(int *)(lVar1 + 0x80) != 0)) {
          fVar3 = SQRT((local_80 - local_70) * (local_80 - local_70) +
                       (fStack_7c - local_6c) * (fStack_7c - local_6c) +
                       (local_78 - local_68) * (local_78 - local_68));
          __src = *(undefined8 **)(lVar1 + 0x78);
          do {
            if (((__src[(ulong)(*(int *)(__src + 0x10) - 1) + 8] != param_1) &&
                (__dest = (void *)FUN_02e535e4(param_4,*__src,&local_80), __dest != (void *)0x0)) &&
               (*(float *)((long)__src + 0x84) + fVar3 < *(float *)((long)__dest + 0x84))) {
              memcpy(__dest,__src,0x90);
              *(float *)((long)__dest + 0x84) = *(float *)((long)__src + 0x84) + fVar3;
            }
            __src = __src + 0x12;
          } while (__src != (undefined8 *)
                            (*(long *)(lVar1 + 0x78) + (ulong)*(uint *)(lVar1 + 0x80) * 0x90));
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8))
      ;
    }
  }
  return;
}


