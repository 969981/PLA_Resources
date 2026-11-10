/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5b708; name: FUN_00d5b708
 */


undefined8 FUN_00d5b708(long param_1,int param_2)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(int *)(param_1 + (long)param_2 * 0x60 + 0x66c) != 0) {
    lVar6 = param_1 + (long)param_2 * 2;
    param_1 = param_1 + (long)param_2 * 0x60;
    *(undefined2 *)(lVar6 + 0x161c) = 0;
    lVar4 = *(long *)(param_1 + 0x638);
    if (*(int *)(lVar4 + 0xb0) != 0) {
      psVar2 = (short *)(lVar6 + 0x161c);
      plVar1 = (long *)(param_1 + 0x638);
      if (*(int *)(**(long **)(lVar4 + 0xa8) + 8) == 1) {
        *(undefined1 *)(*(long **)(lVar4 + 0xa8) + 1) = 1;
        sVar5 = *psVar2 + 1;
        *psVar2 = sVar5;
        lVar4 = *plVar1;
      }
      else {
        sVar5 = 0;
      }
      if ((*(uint *)(lVar4 + 0xb0) & 0xfffffffe) != 0) {
        if (*(int *)(*(long *)(*(long *)(lVar4 + 0xa8) + 0x10) + 8) == 1) {
          *(undefined1 *)(*(long *)(lVar4 + 0xa8) + 0x18) = 1;
          sVar5 = *psVar2 + 1;
          *psVar2 = sVar5;
          lVar4 = *plVar1;
        }
        if (2 < *(uint *)(lVar4 + 0xb0)) {
          if (*(int *)(*(long *)(*(long *)(lVar4 + 0xa8) + 0x20) + 8) == 1) {
            *(undefined1 *)(*(long *)(lVar4 + 0xa8) + 0x28) = 1;
            sVar5 = *psVar2 + 1;
            *psVar2 = sVar5;
            lVar4 = *plVar1;
          }
          if ((*(uint *)(lVar4 + 0xb0) & 0xfffffffc) != 0) {
            if (*(int *)(*(long *)(*(long *)(lVar4 + 0xa8) + 0x30) + 8) == 1) {
              *(undefined1 *)(*(long *)(lVar4 + 0xa8) + 0x38) = 1;
              sVar5 = *psVar2 + 1;
              *psVar2 = sVar5;
              lVar4 = *plVar1;
            }
            if (4 < *(uint *)(lVar4 + 0xb0)) {
              if (*(int *)(*(long *)(*(long *)(lVar4 + 0xa8) + 0x40) + 8) == 1) {
                *(undefined1 *)(*(long *)(lVar4 + 0xa8) + 0x48) = 1;
                sVar5 = *psVar2 + 1;
                *psVar2 = sVar5;
                lVar4 = *plVar1;
              }
              if (5 < (*(ulong *)(lVar4 + 0xb0) & 0xfffffffe)) {
                if (*(int *)(*(long *)(*(long *)(lVar4 + 0xa8) + 0x50) + 8) == 1) {
                  *(undefined1 *)(*(long *)(lVar4 + 0xa8) + 0x58) = 1;
                  sVar5 = *psVar2 + 1;
                  *psVar2 = sVar5;
                  lVar4 = *plVar1;
                }
                if (6 < *(uint *)(lVar4 + 0xb0)) {
                  lVar6 = 0;
                  uVar7 = 6;
                  do {
                    lVar3 = *(long *)(lVar4 + 0xa8) + lVar6;
                    if (*(int *)(*(long *)(lVar3 + 0x60) + 8) == 1) {
                      *(undefined1 *)(lVar3 + 0x68) = 1;
                      sVar5 = *psVar2 + 1;
                      *psVar2 = sVar5;
                      lVar4 = *plVar1;
                    }
                    uVar7 = uVar7 + 1;
                    lVar6 = lVar6 + 0x10;
                  } while (uVar7 < *(uint *)(lVar4 + 0xb0));
                }
              }
            }
          }
        }
      }
      if (sVar5 != 0) {
        FUN_00d5be48();
        return 1;
      }
    }
  }
  return 0;
}


