/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082ee44; name: FUN_0082ee44
 */


void FUN_0082ee44(ushort *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    uVar1 = (ulong)*param_1;
    if (*param_1 != 0) {
      lVar4 = 0;
      lVar3 = *plVar2;
      do {
        if (lVar3 == 0) {
          if (uVar1 <= lVar4 + 1U) goto LAB_0082eeac;
        }
        else {
          FUN_0081a840(lVar3);
          FUN_0081a800(lVar3);
          plVar2[lVar4] = 0;
          plVar2 = *(long **)(param_1 + 0x10);
          uVar1 = (ulong)*param_1;
          if ((ulong)*param_1 <= lVar4 + 1U) goto LAB_0082eeac;
        }
        lVar4 = lVar4 + 1;
        lVar3 = plVar2[lVar4];
      } while( true );
    }
    goto LAB_0082eeb0;
  }
  goto LAB_0082eec4;
LAB_0082ef1c:
  if (plVar2 != (long *)0x0) goto LAB_0082ef20;
  goto LAB_0082ef30;
LAB_0082eeac:
  if (plVar2 != (long *)0x0) {
LAB_0082eeb0:
    FUN_0081a840(plVar2);
    FUN_0081a800(plVar2);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
LAB_0082eec4:
  plVar2 = *(long **)(param_1 + 0xc);
  if (plVar2 != (long *)0x0) {
    uVar1 = (ulong)*param_1;
    if (*param_1 != 0) {
      lVar4 = 0;
      lVar3 = *plVar2;
      do {
        if (lVar3 == 0) {
          if (uVar1 <= lVar4 + 1U) goto LAB_0082ef1c;
        }
        else {
          FUN_0081a840(lVar3);
          FUN_0081a800(lVar3);
          plVar2[lVar4] = 0;
          plVar2 = *(long **)(param_1 + 0xc);
          uVar1 = (ulong)*param_1;
          if ((ulong)*param_1 <= lVar4 + 1U) goto LAB_0082ef1c;
        }
        lVar4 = lVar4 + 1;
        lVar3 = plVar2[lVar4];
      } while( true );
    }
LAB_0082ef20:
    FUN_0081a840(plVar2);
    FUN_0081a800(plVar2);
LAB_0082ef30:
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  return;
}


