/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e6d3d0; name: FUN_01e6d3d0
 */


void FUN_01e6d3d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != param_2) {
    if (*(long **)(lVar1 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -8) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x28) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x28) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x48) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x48) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x68) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x68) + 0x20))();
    }
    if (*(long **)(lVar1 + -0x88) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x88) + 0x20))();
    }
    if (*(long **)(lVar1 + -0xb8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0xb8) + 0x20))();
    }
    if (*(long **)(lVar1 + -0xd8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0xd8) + 0x20))();
    }
    if (*(long **)(lVar1 + -0xf8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0xf8) + 0x20))();
    }
    if (lVar1 + -0x110 != param_2) {
      do {
        if (*(long **)(lVar1 + -0x118) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x118) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x138) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x138) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x158) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x158) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x178) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x178) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x198) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x198) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x1c8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x1c8) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x1e8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x1e8) + 0x20))();
        }
        if (*(long **)(lVar1 + -0x208) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + -0x208) + 0x20))();
        }
        lVar1 = lVar1 + -0x110;
      } while (param_2 + 0x110 != lVar1);
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


