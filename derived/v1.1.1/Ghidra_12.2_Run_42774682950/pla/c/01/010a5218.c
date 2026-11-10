/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a5218; name: FUN_010a5218
 */


undefined8 FUN_010a5218(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((((((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x1e1) == '\0')
         ) || (*(long *)(param_1 + 0x88) == 0)) ||
       ((*(char *)(*(long *)(param_1 + 0x88) + 0x1e1) == '\0' || (*(long *)(param_1 + 0xb8) == 0))))
      || (((*(char *)(*(long *)(param_1 + 0xb8) + 0x1e1) == '\0' ||
           ((*(long *)(param_1 + 0xe8) == 0 ||
            (*(char *)(*(long *)(param_1 + 0xe8) + 0x1e1) == '\0')))) ||
          (*(long *)(param_1 + 0x118) == 0)))) ||
     (((((*(char *)(*(long *)(param_1 + 0x118) + 0x1e1) == '\0' || (*(long *)(param_1 + 0x148) == 0)
         ) || (*(char *)(*(long *)(param_1 + 0x148) + 0x1e1) == '\0')) ||
       (((*(long *)(param_1 + 0x178) == 0 || (*(char *)(*(long *)(param_1 + 0x178) + 0x1e1) == '\0')
         ) || ((*(long *)(param_1 + 0x1a8) == 0 ||
               ((*(char *)(*(long *)(param_1 + 0x1a8) + 0x1e1) == '\0' ||
                (*(long *)(param_1 + 0x1d8) == 0)))))))) ||
      ((((*(char *)(*(long *)(param_1 + 0x1d8) + 0x1e1) == '\0' ||
         (((((*(long *)(param_1 + 0x208) == 0 ||
             (*(char *)(*(long *)(param_1 + 0x208) + 0x1e1) == '\0')) ||
            (*(long *)(param_1 + 0x238) == 0)) ||
           ((*(char *)(*(long *)(param_1 + 0x238) + 0x1e1) == '\0' ||
            (*(long *)(param_1 + 0x268) == 0)))) ||
          ((*(char *)(*(long *)(param_1 + 0x268) + 0x1e1) == '\0' ||
           ((*(long *)(param_1 + 0x298) == 0 ||
            (*(char *)(*(long *)(param_1 + 0x298) + 0x1e1) == '\0')))))))) ||
        (*(long *)(param_1 + 0x2c8) == 0)) ||
       (((((*(char *)(*(long *)(param_1 + 0x2c8) + 0x1e1) == '\0' ||
           (*(long *)(param_1 + 0x2f8) == 0)) ||
          (*(char *)(*(long *)(param_1 + 0x2f8) + 0x1e1) == '\0')) ||
         ((*(long *)(param_1 + 0x328) == 0 ||
          (*(char *)(*(long *)(param_1 + 0x328) + 0x1e1) == '\0')))) ||
        (uVar1 = FUN_00d099d4(*(undefined8 *)(param_1 + 0x4f70)), (uVar1 & 1) == 0)))))))) {
LAB_010a5388:
    uVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x4f78) == '\0') {
    FUN_010a4724(param_1);
    uVar2 = 0;
    *(char *)(param_1 + 0x4f78) = '\x01';
  }
  else if (*(char *)(param_1 + 0x4f79) == '\0') {
    lVar3 = -0x4740;
    do {
      lVar4 = *(long *)(param_1 + lVar3 + 0x4a98);
      if (((lVar4 != 0) && (*(char *)(lVar4 + 0x1e1) == '\0')) ||
         ((lVar4 = *(long *)(param_1 + lVar3 + 0x4ac8), lVar4 != 0 &&
          (*(char *)(lVar4 + 0x1e1) == '\0')))) goto LAB_010a5388;
      lVar3 = lVar3 + 0x60;
    } while (lVar3 != 0);
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x4f79) = 1;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


