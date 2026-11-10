/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01268ce8; name: FUN_01268ce8
 */


void FUN_01268ce8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != param_2) {
    if (*(long **)(lVar1 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x10) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x18) + 0x20))();
    }
    if (lVar1 + -0x20 != param_2) {
      if (*(long **)(lVar1 + -0x30) != (long *)0x0) {
        (**(code **)(**(long **)(lVar1 + -0x30) + 0x20))();
      }
      if (*(long **)(lVar1 + -0x38) != (long *)0x0) {
        (**(code **)(**(long **)(lVar1 + -0x38) + 0x20))();
      }
      if (lVar1 + -0x40 != param_2) {
        if (*(long **)(lVar1 + -0x50) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x50) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x58) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x58) + 0x20))();
        }
        if (lVar1 + -0x60 != param_2) {
          if (*(long **)(lVar1 + -0x70) != (long *)0x0) {
            (**(code **)(**(long **)(lVar1 + -0x70) + 0x20))();
          }
          if (*(long **)(lVar1 + -0x78) != (long *)0x0) {
            (**(code **)(**(long **)(lVar1 + -0x78) + 0x20))();
          }
          if (lVar1 + -0x80 != param_2) {
            if (*(long **)(lVar1 + -0x90) != (long *)0x0) {
              (**(code **)(**(long **)(lVar1 + -0x90) + 0x20))();
            }
            if (*(long **)(lVar1 + -0x98) != (long *)0x0) {
              (**(code **)(**(long **)(lVar1 + -0x98) + 0x20))();
            }
            if (lVar1 + -0xa0 != param_2) {
              if (*(long **)(lVar1 + -0xb0) != (long *)0x0) {
                (**(code **)(**(long **)(lVar1 + -0xb0) + 0x20))();
              }
              if (*(long **)(lVar1 + -0xb8) != (long *)0x0) {
                (**(code **)(**(long **)(lVar1 + -0xb8) + 0x20))();
              }
              if (lVar1 + -0xc0 != param_2) {
                if (*(long **)(lVar1 + -0xd0) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar1 + -0xd0) + 0x20))();
                }
                if (*(long **)(lVar1 + -0xd8) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar1 + -0xd8) + 0x20))();
                }
                if (lVar1 + -0xe0 != param_2) {
                  do {
                    if (*(long **)(lVar1 + -0xf0) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar1 + -0xf0) + 0x20))();
                    }
                    if (*(long **)(lVar1 + -0xf8) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar1 + -0xf8) + 0x20))();
                    }
                    lVar1 = lVar1 + -0x20;
                  } while (param_2 + 0xe0 != lVar1);
                }
              }
            }
          }
        }
      }
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


