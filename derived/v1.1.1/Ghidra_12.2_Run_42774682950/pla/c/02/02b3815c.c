/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3815c; name: FUN_02b3815c
 */


void FUN_02b3815c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  if ((*(char *)(param_1 + 0x228) != '\0') && (*(char *)(param_1 + 0x22a) != '\0')) {
    plVar8 = *(long **)(param_1 + 0x78);
    plVar2 = *(long **)(param_1 + 0x80);
    if (plVar8 != plVar2) {
      plVar4 = plVar8;
      do {
        lVar5 = *plVar4;
        if (*(char *)(lVar5 + 0x12d) != '\0') {
          plVar3 = *(long **)(lVar5 + 0xe0);
          while (plVar3 != *(long **)(lVar5 + 0xe8)) {
            lVar7 = *plVar3;
            plVar3 = plVar3 + 1;
            if ((~*(uint *)(lVar7 + 200) & 3) == 0) {
              do {
                *(undefined1 *)(*plVar8 + 0x12e) = *(undefined1 *)(param_1 + 0x229);
                lVar5 = *plVar8;
                plVar3 = *(long **)(lVar5 + 0xe8);
                for (plVar4 = *(long **)(lVar5 + 0xe0); plVar4 != plVar3; plVar4 = plVar4 + 1) {
                  uVar6 = *(ulong *)(*plVar4 + 200);
                  uVar1 = uVar6 & 0xfffffffffffffffd;
                  if (*(char *)(lVar5 + 0x12d) != '\0') {
                    uVar1 = uVar6 | 2;
                  }
                  *(ulong *)(*plVar4 + 200) = uVar1;
                  uVar6 = *(ulong *)(*plVar4 + 200);
                  uVar1 = uVar6 & 0xfffffffffffffffb;
                  if (*(char *)(lVar5 + 0x12e) != '\0') {
                    uVar1 = uVar6 | 4;
                  }
                  *(ulong *)(*plVar4 + 200) = uVar1;
                  lVar7 = *plVar4;
                  if ((~*(uint *)(lVar7 + 200) & 3) == 0) {
                    FUN_02bbd098(*(undefined8 *)(lVar7 + 0x68),lVar7 + 0x60,lVar7 + 0x80,
                                 *(undefined4 *)(lVar7 + 0x90));
                  }
                }
                plVar8 = plVar8 + 1;
              } while (plVar8 != plVar2);
              return;
            }
          }
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar2);
    }
  }
  return;
}


